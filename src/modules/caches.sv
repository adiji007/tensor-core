
module caches (
input logic CLK, nRST,
datapath_cache_if dcif,
cache_control_if cif
);
// icache
icache ICACHE(CLK, nRST, dcif, cif);
// dcache
dcache DCACHE(CLK, nRST, dcif, cif);

//scratchpad

endmodule