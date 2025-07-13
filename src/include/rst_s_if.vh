`ifndef RST_S_IF_VH
`define RST_S_IF_VH
`include "datapath_types.vh"

interface rst_s_if;
  import datapath_pkg::*;

  // Inputs from dispatch
  logic [4:0] di_sel;  // 5bits for the selecting the register index
  logic di_write;
  logic [1:0] di_tag;
  logic spec;         // :this spec seems to differ from spec bit for individual registers.
  logic flush, resolved;

  // Inputs from writeback
  logic [4:0] wb_sel;
  logic wb_write;
    
  // Outputs of stage
  rst_s_t status;
    
  modport RSTS (
      input di_sel, di_write, di_tag, wb_sel, wb_write, spec, flush, resolved,
      output status
  );

endinterface
`endif
