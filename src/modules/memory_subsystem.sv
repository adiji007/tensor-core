`include "datapath_cache_if.vh"
`include "caches_if.vh"
`include "arbiter_caches_if.vh"
`include "scratchpad_if.vh"

module memory_subsystem (
    input logic CLK, nRST,
    datapath_cache_if dcif,
    caches_if cif,
    arbiter_caches_if acif
);

    // Internal interface for scratchpad
    scratchpad_if spif();

    // Arbiter
    memory_arbiter_basic ARB (
        .CLK(CLK),
        .nRST(nRST),
        .acif(acif),
        .spif(spif.arbiter)
    );

    // Instruction cache
    icache ICACHE (
        .CLK(CLK),
        .nRST(nRST),
        .cif(cif),
        .dcif(dcif)
    );

    // Data cache
    dcache DCACHE (
        .CLK(CLK),
        .nRST(nRST),
        .cif(cif),
        .dcif(dcif)
    );

    // Scratchpad
    scratchpad SP (
        .CLK(CLK),
        .nRST(nRST),
        .spif(spif.sp)
    );

endmodule