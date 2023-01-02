    ;check for a case of sub from the same register the store results are in 
    ;check that 2 subs work in the same file  
    .ORIG x3000
    RST R1
    RST R2
    ADD R1,R1,#5
    ADD R2,R2, #2
    SUB R3, R1, R2
    SUB R1, R1, R2
    .END