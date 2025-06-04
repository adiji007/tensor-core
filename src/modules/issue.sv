// fust gets written do in dispatch on clock edge
// issue should read registers and issue to execute by the next clock edge
`include "datapath_types.vh"
`include "issue_if.vh"
`include "regfile.sv"
`include "regfile_if.vh"
`include "fust_s.sv"
`include "fust_s_if.vh"
`include "fust_m.sv"
`include "fust_m_if.vh"
`include "fust_g.sv"
`include "fust_g_if.vh"

module issue(
    input logic CLK, nRST,
    issue_if.IS isif
);

    import isa_pkg::*;
    import datapath_pkg::*;

    // Instantiations
    regfile_if rfif();
    fust_s_if fusif();
    fust_m_if fumif();
    fust_g_if fugif();

    regfile RF (CLK, nRST, rfif);
    fust_s FS (CLK, nRST, fusif);
    fust_m FM (CLK, nRST, fumif);
    fust_g FG (CLK, nRST, fugif);

    // Local Variables
    logic hazard, halt;
    fust_s_t fust_s;
    fust_m_t fust_m;
    fust_g_t fust_g;
    issue_t n_issue;
    issue_t issue;
    regbits_t s_rs1, s_rs2;
    word_t imm;
    logic [4:0] incoming_instr;

    logic [4:0] rdy;
    logic [4:0] n_rdy;
    logic [4:0][2:0] age;
    logic [4:0][2:0] n_age;
    fust_state_e [4:0] fust_state;
    fust_state_e [4:0] next_fust_state;
    logic [4:0] oldest_rdy;
    logic [4:0] next_oldest_rdy;
    logic i_type;
    logic lui_type;
    // logic [2:0] oldest_age;
    // logic [2:0] next_oldest_age;

    always_comb begin : Incoming_Instr_Logic
      incoming_instr = '0;
      if (isif.n_fu_t == FU_S_T) begin
        case (isif.n_fu_s)
          FU_S_ALU:    incoming_instr = 5'b00001;
          FU_S_LD_ST:  incoming_instr = 5'b00010;
          FU_S_BRANCH: incoming_instr = 5'b00100;
          default: incoming_instr = '0;
        endcase
      end else if (isif.n_fu_t == FU_M_T)
        incoming_instr = 5'b01000;
      else if (isif.n_fu_t == FU_G_T)
        incoming_instr = 5'b10000;
    end
      

    always_ff @ (posedge CLK, negedge nRST) begin: Pipeline_Latching
      if (~nRST)
        isif.out <= '0;
    	else
        isif.out <= n_issue;
    end

    always_comb begin : Pipeline_Output
      case (1'b1)
        isif.dispatch.freeze: n_issue = isif.out; //need to think of cases for freezes/flushes
        default:     n_issue = issue;
      endcase
    end

    always_comb begin : Regfile
      rfif.WEN   = isif.wb.reg_en;
      rfif.wsel  = isif.wb.reg_sel;
      rfif.wdata = isif.wb.wdat;
      rfif.rsel1 = s_rs1;
      rfif.rsel2 = s_rs2;
    end

    always_comb begin : FUST
      // this needs verified, only dispatch writes to the FUST, but on a wb
      // complete, the row should be made available for a new isntruction.
      // Right now the table doesnt get cleared, but the busy bit gets cleared
      // by the issue stage which should allow dispatch to overwrite it.
      fusif.en       = isif.n_fust_s_en;
      fusif.fu       = isif.n_fu_s;
      fusif.fust_row = isif.n_fust_s; // spec bit written here
      fusif.resolved = isif.branch_resolved;

      fusif.busy[0]  = (fust_state[0] == FUST_EX && (next_fust_state[0] == FUST_EMPTY || (next_fust_state[0] == FUST_WAIT && !incoming_instr[0]))) ? 1'd0 : next_fust_state[0] != FUST_EMPTY;
      fusif.busy[1]  = (fust_state[1] == FUST_EX && (next_fust_state[1] == FUST_EMPTY || next_fust_state[1] == FUST_WAIT)) ? 1'd0 : next_fust_state[1] != FUST_EMPTY;
      fusif.busy[2]  = (fust_state[2] == FUST_EX && (next_fust_state[2] == FUST_EMPTY || next_fust_state[2] == FUST_WAIT)) ? 1'd0 : next_fust_state[2] != FUST_EMPTY;

      // // (fust_state[0] == FUST_EX && (next_fust_state[0] == FUST_EMPTY || next_fust_state[0] == FUST_WAIT))
      // fusif.busy[0]  = isif.fu_ex[0] == 1'b1 ? 1'd0 : next_fust_state[0] != FUST_EMPTY;
      // // (fust_state[1] == FUST_EX && (next_fust_state[1] == FUST_EMPTY || next_fust_state[1] == FUST_WAIT))
      // fusif.busy[1]  = isif.fu_ex[1] == 1'b1 ? 1'd0 : next_fust_state[1] != FUST_EMPTY;
      // // (fust_state[2] == FUST_EX && (next_fust_state[2] == FUST_EMPTY || next_fust_state[2] == FUST_WAIT))
      // fusif.busy[2]  = isif.fu_ex[2] == 1'b1 ? 1'd0 : next_fust_state[2] != FUST_EMPTY;
     
      // TODO
      // could be writing the flush bits here as well if not in the dispatch,
      // like how busy is being written independent of the rows that dispatch
      // writes
      

      fusif.t1 = isif.n_t1;
      fusif.t2 = isif.n_t2;

      fumif.en       = isif.n_fust_m_en;
      fumif.fust_row = isif.n_fust_m;
      fumif.busy     = (fust_state[3] == FUST_EX && (next_fust_state[3] == FUST_EMPTY || next_fust_state[3] == FUST_WAIT)) ? 1'd0 : next_fust_state[3] != FUST_EMPTY;

      fumif.t1 = isif.n_rm;
      fumif.t2 = isif.n_mm;

      fugif.en       = isif.n_fust_g_en;
      fugif.fust_row = isif.n_fust_g;
      fugif.busy     = (fust_state[4] == FUST_EX && (next_fust_state[4] == FUST_EMPTY || next_fust_state[4] == FUST_WAIT)) ? 1'd0 : next_fust_state[4] != FUST_EMPTY;

      fugif.t1 = isif.n_gt1;
      fugif.t2 = isif.n_gt2;
      fugif.t3 = isif.n_gt3;

      fusif.flush = isif.branch_miss;

      // if (isif.branch_miss) begin
      //   fusif.flush = 1'b1;
      // //  then flush fusif.fust.op[i], easiest way is
      // //  probably adding a flush bit to the fusif.fust.op[]
      // //  and let the fust_s clear its rows with that bit asserted
      // //  since fusif.fust.op can only write one row at a time
      // end

    end

    always_ff @ (posedge CLK, negedge nRST) begin: Age_Latch
      if (~nRST)
        age <= '0;
      else
        age <= n_age;
    end

    always_comb begin : Age_Logic
      n_age = age;
      for (int i = 0; i < 5; i++) begin
        case (fust_state[i])
          FUST_EMPTY: n_age[i] = {1'b0,incoming_instr[i]}; // set new instructions to age 1
          FUST_WAIT:  n_age[i] = (|incoming_instr) ? age[i] + 1 : age[i];
          FUST_RDY:   n_age[i] = (|incoming_instr) ? age[i] + 1 : age[i];
          FUST_EX:    n_age[i] = (next_fust_state[i] == FUST_WAIT) ? 1'b1 :'0;
          default: n_age = age;
        endcase
      end
    end
    
    always_ff @ (posedge CLK, negedge nRST) begin: Oldest_Latch
      if (~nRST) begin
        // oldest_age <= '0;
        oldest_rdy <= '0;
      end else begin
        // oldest_age <= next_oldest_age;
        oldest_rdy <= next_oldest_rdy;
      end
    end

    logic [5:0] test;

    always_comb begin : Oldest_Logic
      // next_oldest_age = oldest_age;
      next_oldest_rdy = oldest_rdy;
      test = '0;
      // for (int i = 0; i < 5; i++) begin
          // && (age[i] > oldest_age)
          // next_oldest_rdy[i] = 1'b1;
      if (rdy[0] && (fust_state[0] != FUST_EX)) begin
        next_oldest_rdy[0] = ((age[0] > age[1]) && (age[0] > age[2]) && (age[0] > age[3]) && (age[0] > age[4])) ? 1'b1 : (next_fust_state[0] == FUST_EMPTY) ? 1'b0 : oldest_rdy[0];
        test[1] = 1;
      end
      if (rdy[1] && (fust_state[1] != FUST_EX)) begin
        next_oldest_rdy[1] = ((age[1] > age[0]) && (age[1] > age[2]) && (age[1] > age[3]) && (age[1] > age[4])) ? 1'b1 : (next_fust_state[1] == FUST_EMPTY) ? 1'b0 : oldest_rdy[1];
        test[2] = 1;
      end
      if (rdy[2] && (fust_state[2] != FUST_EX)) begin
        next_oldest_rdy[2] = ((age[2] > age[0]) && (age[2] > age[1]) && (age[2] > age[3]) && (age[2] > age[4])) ? 1'b1 : (next_fust_state[2] == FUST_EMPTY) ? 1'b0 : oldest_rdy[2];
        test[3] = 1;
      end
      if (rdy[3] && (fust_state[3] != FUST_EX)) begin
        next_oldest_rdy[3] = ((age[3] > age[0]) && (age[3] > age[1]) && (age[3] > age[2]) && (age[3] > age[4])) ? 1'b1 : (next_fust_state[3] == FUST_EMPTY) ? 1'b0 : oldest_rdy[3];
        test[4] = 1;
      end
      if (rdy[4] && (fust_state[4] != FUST_EX)) begin
        next_oldest_rdy[4] = ((age[4] > age[0]) && (age[4] > age[1]) && (age[4] > age[2]) && (age[4] > age[3])) ? 1'b1 : (next_fust_state[4] == FUST_EMPTY) ? 1'b0 : oldest_rdy[4];
        test[5] = 1;
      end

        // if (rdy[i] && fust_state == FUST_RDY && (age[i] > oldest_rdy)) begin
        //   next_oldest_rdy[i] = 1'b1;
        // end


        // if (fust_state[i] != FUST_EX && next_fust_state[i] == FUST_EX) begin
        //   next_oldest_age[i] = '0;
        //   // next_oldest_rdy[i] = '0;
        // end
      for (int i = 0; i < 5; i++) begin
        if (next_fust_state[i] == FUST_EMPTY) begin
          next_oldest_rdy[i] = '0;
          // next_oldest_age = '0;
        end
      end
    end

    always_ff @ (posedge CLK, negedge nRST) begin: Ready_Latch
      if (~nRST)
        rdy <= '0;
      else
        rdy <= n_rdy;
    end

    always_comb begin : Ready_Logic
      n_rdy = rdy;
      for (int i = 0; i < 5; i++) begin
        case (fust_state[i])
          FUST_EMPTY: n_rdy[i] = 1'b0;
          FUST_WAIT: begin // implies instruction is already loaded
            if (i < 3) begin // Scalar FUST
              n_rdy[i] = (!(|fusif.fust.t1[i]) && !(|fusif.fust.t2[i]));
            end else if (i == 3) begin // Matrix LD/ST FUST
              n_rdy[i] = (!(|fumif.fust.t1) && !(|fumif.fust.t2));
            end else if (i == 4) begin // GEMM FUST
              n_rdy[i] = (!(|fugif.fust.t1) && !(|fugif.fust.t2) && !(|fugif.fust.t3));
            end
          end
          // I think just let FUST_RDY state get its rdy bit resolved in EX if
          // output logic is going to depend on n_rdy, clearing it in RDY
          // wont let it issue
          //FUST_RDY:
          FUST_EX: n_rdy[i] = 1'b0;
          default: n_rdy[i] = rdy[i];
        endcase
      end
    end

    always_ff @ (posedge CLK, negedge nRST) begin: FUST_State
      if (~nRST)
        fust_state <= {5{FUST_EMPTY}};
    	else
        fust_state <= next_fust_state;
    end

    logic [4:0] fu_ready, next_ready;
    logic single_ready, next_single_ready;
    always_comb begin
      fu_ready = '0;
      next_ready = '0;
      for (int i = 0; i < 5; i++) begin 
        if (fust_state[i] == FUST_RDY) begin
          fu_ready[i] = 1'b1;
        end
        if (n_rdy[i]) begin
          next_ready[i] = 1'b1;
        end
      end
      single_ready = (fu_ready == 5'd1) || (fu_ready == 5'd2) || (fu_ready == 5'd4) || (fu_ready == 5'd8) || (fu_ready == 5'd16);
      next_single_ready = (next_ready == 5'd1) || (next_ready == 5'd2) || (next_ready == 5'd4) || (next_ready == 5'd8) || (next_ready == 5'd16);
    end

    // Issue Policy: Oldest instruction first
    always_comb begin : FUST_Next_State
      next_fust_state = fust_state;
      // if (!isif.freeze) begin
        for (int i = 0; i < 5; i++) begin
          if (isif.branch_miss) begin
            next_fust_state[i] = FUST_EMPTY;
          end
          else begin
            case (fust_state[i])
              FUST_EMPTY: begin
                next_fust_state[i] = (incoming_instr[i]) ? FUST_WAIT : FUST_EMPTY;
              end
              FUST_WAIT: begin
                if (n_rdy[i]) begin
                  if ((i==3 || i==4 || i==1) && fusif.fust.op[i].spec) begin
                    next_fust_state[i] = FUST_RDY;
                  end 
                  else begin
                    next_fust_state[i] = (((n_rdy[i] == next_oldest_rdy[i]) || (next_single_ready))) ? FUST_EX : FUST_RDY;
                  end
                end
              end
              FUST_RDY: begin
                if ((i==3 || i==4 || i==1) && fusif.fust.op[i].spec) begin
                    next_fust_state[i] = FUST_RDY;
                end 
                else begin 
                  next_fust_state[i] = (((next_oldest_rdy[i]) || (single_ready))) ? FUST_EX : FUST_RDY;
                end
              end
              FUST_EX: begin
              
                //TODO:handle flushing on speculation
                // if (isif.branch_miss & fusif.fust.op[i].spec) begin
                //  then flush fusif.fust.op[i], easiest way is
                //  probably adding a flush bit to the fusif.fust.op[]
                //  and let the fust_s clear its rows with that bit asserted
                //  since fusif.fust.op can only write one row at a time
  
                // end
                
  
                // TODO fust related wb
                if ((isif.fu_ex[0] == 1'b1) && (i == 0)) begin 
                  next_fust_state[i] = incoming_instr[i] ? FUST_WAIT : FUST_EMPTY;
                end
                else if ((isif.fu_ex[1] == 1'b1) && (i == 1)) begin
                  next_fust_state[i] = incoming_instr[i] ? FUST_WAIT : FUST_EMPTY;
                end
                else if ((isif.fu_ex[2] == 1'b1) && (i == 2)) begin
                  next_fust_state[i] = incoming_instr[i] ? FUST_WAIT : FUST_EMPTY;
                end
                else if ((isif.fu_ex[3] == 1'b1) && (i == 3)) begin
                  next_fust_state[i] = incoming_instr[i] ? FUST_WAIT : FUST_EMPTY;
                end
                else if ((isif.fu_ex[4] == 1'b1) && (i == 4)) begin
                  next_fust_state[i] = incoming_instr[i] ? FUST_WAIT : FUST_EMPTY;
                end
  
                //TODO: handle dones from branch and matrix FUs
  
                // WAR HANDLING
                //writing to reg A, where an older FUST thats in RDY or WAIT (hasnt
                //read register) needs to stall the write to A until all reads to
                //reg A are in EX
                
                // TODO: need stall signals for the execute FUs if next_fust_state
                // is stalled in EX
  
                // WAR not needed as if 4/11/25
                
                // if ((i == 0 & (fusif.fust.t1[1] == 2'd0 | fusif.fust.t2[1] == 2'd0)) &
                //     (fust_state[1] == FUST_WAIT | fust_state[1] == FUST_RDY) &
                //     age[1] > age[0]) begin
                //   // stall ALU from writing
                //   next_fust_state[i] = FUST_EX;
                // end
                // if ((i == 1 & (fusif.fust.t1[0] == 2'd1 | fusif.fust.t2[0] == 2'd1) &&
                //     (fust_state[0] == FUST_WAIT | fust_state[0] == FUST_RDY) &&
                //     age[0] > age[1])) begin
                //   // stall LD/ST from writing
                //   next_fust_state[i] = FUST_EX;
                // end
                
  
              end
              default: begin
                next_fust_state = fust_state;
              end
            endcase
          end
        end
      // end
    end

    always_ff @(posedge CLK, negedge nRST)begin
      if (!nRST) begin
        halt <= '0;
      end
      else begin 
        halt <= halt || isif.dispatch.halt;
      end
    end

    assign isif.halt = halt;

    always_comb begin : Output_Logic
      // TODO: output each struct if that fu is going into FUST_EX, if not set to 0
      issue = isif.out;
      isif.fust_state = fust_state;
      s_rs1 = '0;
      s_rs2 = '0;
      imm = '0;
      i_type = '0;
      lui_type = '0;
      issue.halt = '0;
      // issue.spec = '0;
      if (!(|isif.fust_s.busy || isif.fust_m.busy || isif.fust_g.busy || isif.branch_miss)) begin
        issue.halt = halt;
      end
      // issue.halt = (|fust_s.busy || fust_m.busy || fust_g.busy || isif.branch_miss) ? '0 : isif.dispatch.halt;
      for (int i = 0; i < 5; i++) begin
        // issue.spec = isif.dispatch.spec; // pretty sure only on alu instr
        if (isif.fu_ex[i]) begin
          issue.fu_en[i] = 1'b0;
        end
        //TODO:verify this will only ever apply to one instruction per cycle
        // if ((fust_state[i] != FUST_EX && next_fust_state[i] == FUST_EX) && !(isif.branch_miss && fusif.fust.op[i].spec)) begin
        if (fust_state[i] != FUST_EX && next_fust_state[i] == FUST_EX) begin
          // issue this instruction
          // TODO: add opcode to be sent to FUs
          if (i < 3) begin // alu, sls, br
            s_rs1 = fusif.fust.op[i].rs1;
            s_rs2 = fusif.fust.op[i].rs2;
            i_type = fusif.fust.op[i].i_type;
            lui_type = fusif.fust.op[i].lui;
            issue.fu_en[i] = 1'b1;
            imm = fusif.fust.op[i].imm;
            issue.alu_op = aluop_t'(fusif.fust.op[i].op_type);
            issue.mem_type = scalar_mem_t'(fusif.fust.op[i].mem_type);
            // if (i==2) begin // better to have this or no??
            issue.branch_type = branch_t'(fusif.fust.op[i].op_type);
            issue.branch_pc = isif.dispatch.n_br_pc;
            issue.branch_pred_pc = isif.dispatch.n_br_pred;
            // end
            issue.rd = fusif.fust.op[i].rd;
            issue.spec = ((i==0 || i==1) && !isif.branch_resolved && !isif.branch_miss) ? fusif.fust.op[i].spec : '0; // pretty sure only on alu instr
            issue.j_type = fusif.fust.op[i].j_type;
          end else if (i == 3) begin // mls
            issue.md = fumif.fust.op.md;
            issue.ls_in = fumif.fust.op.mem_type;
            s_rs1 = fumif.fust.op.rs1;
            issue.fu_en[i] = 1'b1;
            imm = fumif.fust.op.imm;
          end else if (i == 4) begin // gemm
            issue.md  = fugif.fust.op.md;
            issue.ms1 = fugif.fust.op.ms1;
            issue.ms2 = fugif.fust.op.ms2;
            issue.ms3 = fugif.fust.op.ms3;
            issue.gemm_new_weight = fugif.fust.op.new_weight; 
            issue.fu_en[i] = 1'b1;
          end
          issue.rdat1 = (lui_type) ? '0 : rfif.rdat1;
          issue.rdat2 = (i_type && (fusif.fust.op[i].mem_type == scalar_na) && (issue.fu_en[2] != 1'b1)) ? imm : rfif.rdat2;
          issue.imm = imm;
        end
      end
    end

    always_comb begin : Dispatch_Loopback
      isif.fust_s = fusif.fust;
      isif.fust_m = fumif.fust;
      isif.fust_g = fugif.fust;
    end

endmodule
