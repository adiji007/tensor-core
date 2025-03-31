`ifndef BANK_ACCESS_FM_IF
`define BANK_ACCESS_FM_IF
`include "types_pkg.vh"
import types_pkg::*;

interface bank_access_FSM_if;

    logic sLoad_hit, wFIFO0_full, instrFIFO_empty, rFIFO0_full;
    logic [ROW_S_W-1:0] sLoad_row;
    logic [BITS_PER_ROW-1:0] load_data;
    logic [2+MAT_S_W+ROW_S_W+WORD_W-1:0] instrFIFO_rdata;

endinterface

`endif 