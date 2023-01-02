.ORIG x3000
; Test case 1: Add two positive numbers
      LD R1, #3
      LD R2, #2
      ADD R3, R1, R2
      BRz test_add
      ; Test case 1 failed
      HALT
test_add:
; Test case 2: Add two negative numbers
      LD R1, #-2
      LD R2, #-2
      ADD R3, R1, R2
      BRz PAST_TEST_CASE_2
      ; Test case 2 failed
      HALT
PAST_TEST_CASE_2:
    
; Test case 3: Add positive and negative numbers
      LD R1, #2
      LD R2, #-2
      ADD R3, R1, R2
      BRz PAST_TEST_CASE_3
      ; Test case 3 failed
      HALT
PAST_TEST_CASE_3:
    
; Test case 4: Add negative and positive numbers
      LD R1, #-2
      LD R2, #2
      ADD R3, R1, R2
      BRz PAST_TEST_CASE_4
      ; Test case 4 failed
      HALT
PAST_TEST_CASE_4:
    

; Test case 5: Add two zero values
      LD R1, #0
      LD R2, #0
      ADD R3, R1, R2
      BRz PAST_TEST_CASE_5
      ; Test case 5 failed
      HALT
PAST_TEST_CASE_5:

.END
