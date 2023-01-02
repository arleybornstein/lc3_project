    ;check subtracting a register by itself 
    ;result should be 0
    .ORIG x3000
    RST R1
    ADD R1,R1,#3
    SUB R0, R1, #3
    .END