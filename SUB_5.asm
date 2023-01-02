    ;check for a case no register are the same 
    .ORIG x3000
    RST R1
    ADD R1,R1,#5
    ADD R2,R2, #2
    SUB R3, R1, #2
    .END