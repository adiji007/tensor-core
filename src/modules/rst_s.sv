`include "rst_s_if.vh"
`include "datapath_types.vh"

module rst_s (
    input logic CLK, nRST,
    rst_s_if.RSTS rstif
);

  import datapath_pkg::*;

  rst_s_t status;
  
  always_ff @(posedge CLK, negedge nRST) begin
    if (~nRST)
      rstif.status <= '0;
    else
      rstif.status <= status;
  end

  always_comb begin
    status = rstif.status;

    if (rstif.flush) begin                // :Flush the flags for every individual register
      for (int i = 1; i < 32; i++) begin
        status.idx[i].busy = '0;
        status.idx[i].tag = '0;
        status.idx[i].spec = '0;
      end
    end

    if (rstif.resolved) begin
      for (int i = 1; i < 32; i++) begin
        status.idx[i].spec = '0;
      end
    end

    if (rstif.di_write) begin //assumes dispatch reads the state is IDLE // :Whenever an instruction is dispatched, update flags for the register
      status.idx[rstif.di_sel].busy = 1;
      status.idx[rstif.di_sel].tag = rstif.di_tag;
      status.idx[rstif.di_sel].spec = rstif.spec;
    end
    if (rstif.wb_write) begin                 // :Written to register file, so clear busy and tag entry
      status.idx[rstif.wb_sel].busy = 0;
      status.idx[rstif.wb_sel].tag = '0;
    end

  end

endmodule
