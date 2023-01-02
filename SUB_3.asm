    ;check tthat negative numbers work 
    ;result should be -7 in R3
    .ORIG x3000
    RST R1
    RST R2
    ADD R1,R1,#-5
    ADD R2,R2, #2
    SUB R3, R1, R2
    .END