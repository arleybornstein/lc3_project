//testing the write_values we use in SUB 
#include <stdio.h>

int a_output[30];
int b_output[30];
int n = sizeof(a_output) / sizeof(a_output[0]);
int idx_a=0;
int idx_b=0;

void write_value(int val, int *output, int *idx)
{
  output[*idx] = val;
  (*idx)++;
}

void OP_MLT()
{
  int r1= 0b01;
  int r2= 0b10;
  int r3= 0b11;
  write_value (0x3000 | (r2<< 9) | (0x3), a_output, &idx_a); 
  write_value (0x3000 | (r3 << 9) | (0x3), a_output, &idx_a); 
  write_value (0x3000 | (r3 << 9) | (0x3), a_output, &idx_a); 
  write_value(0xE03, a_output, &idx_a);
  write_value(0xE02, a_output, &idx_a);
  write_value(0xE02, a_output, &idx_a);
  write_value(0xE02, a_output, &idx_a); 
  write_value (0x1020 | (r3 << 9) | (r3 << 6) | (0x0), a_output, &idx_a);
  write_value(0x807, a_output, &idx_a); 
  write_value (0x5020 | (r1 << 9) | (r1 << 6)| (0x0 & 0x1F), a_output, &idx_a);   
  write_value (0x2000 | (r3 << 9) | (0x1F9), a_output, &idx_a);
  write_value (0x1000 | (r1 << 9) | (r1 << 6) | (r3), a_output, &idx_a); 
  write_value (0x2000 | (r3 << 9) | (0x1F9), a_output, &idx_a);                
  write_value (0x1020 | (r3 << 9) | (r3 << 6) | (0x1F), a_output, &idx_a);
  write_value (0x3000 | (r3 << 9) | (0x1F7), a_output, &idx_a);
  write_value(0xE0E, a_output, &idx_a);
  write_value (0x1020 | (r1 << 9) | (r1 << 6) | (0x0), a_output, &idx_a);
  write_value(0x807, a_output, &idx_a);
  write_value (0x5020 | (r1 << 9) | (r1 << 6)| (0x0), a_output, &idx_a);   
  write_value (0x2000 | (r3 << 9) | (0x1F2), a_output, &idx_a);
  write_value (0x1000 | (r1 << 9) | (r1 << 6) | (r3), a_output, &idx_a);
  write_value (0x2000 | (r3 << 9) | (0x1EE), a_output, &idx_a);                 
  write_value (0x1020 | (r3 << 9) | (r3 << 6) | (0x1F), a_output, &idx_a);
  write_value (0x3000 | (r3 << 9) | (0x1EC), a_output, &idx_a);
  write_value(0xE05, a_output, &idx_a);
  write_value (0x903F | (r3 << 9) | (r3 << 6), a_output, &idx_a);
  write_value (0x1020 | (r3 << 9) | (r3 << 6) | (0x1), a_output, &idx_a);
  write_value (0x903F | (r1 << 9) | (r1 << 6), a_output, &idx_a);
  write_value (0x1020 | (r1 << 9) | (r1 << 6) | (0x1), a_output, &idx_a);
  write_value(0xFF4, a_output, &idx_a);
  write_value(0xBEB, a_output, &idx_a);
  write_value (0x2000 | (r3 << 9) | (0x1E5), a_output, &idx_a);
}

void OP_MLT_REAL()
{
  write_value (0b0011010000000011, b_output, &idx_b);
  write_value (0b0011011000000011, b_output, &idx_b);
  write_value (0b0011011000000011, b_output, &idx_b);
  write_value (0b0000111000000011, b_output, &idx_b);
  write_value (0b111000000010, b_output, &idx_b);
  write_value (0b111000000010, b_output, &idx_b);
  write_value (0b111000000010, b_output, &idx_b);
  write_value (0b0001011011100000, b_output, &idx_b);
  write_value (0b100000000111, b_output, &idx_b);
  write_value (0b0101001001100000, b_output, &idx_b);
  write_value (0b0010011111111001, b_output, &idx_b);
  write_value (0b0001001001000011, b_output, &idx_b);
  write_value (0b0010011111111001, b_output, &idx_b);
  write_value (0b0001011011111111, b_output, &idx_b);
  write_value (0b0011011111110111, b_output, &idx_b);
  write_value (0b0111000001110, b_output, &idx_b);
  write_value (0b0001001001100000, b_output, &idx_b);
  write_value (0b100000000111, b_output, &idx_b);
  write_value (0b0101001001100000, b_output, &idx_b);
  write_value (0b0010011111110010, b_output, &idx_b);
  write_value (0b0001001001000011, b_output, &idx_b);
  write_value (0b0010011111101110, b_output, &idx_b);
  write_value (0b0001011011111111, b_output, &idx_b);
  write_value (0b0011011111101100, b_output, &idx_b);
  write_value (0b111000000101, b_output, &idx_b);
  write_value (0b1001011011111111, b_output, &idx_b);
  write_value (0b0001011011100001, b_output, &idx_b);
  write_value (0b1001001001111111, b_output, &idx_b);
  write_value (0b0001001001100001, b_output, &idx_b);
  write_value (0b111111110100, b_output, &idx_b);
  
  
  
}

int main()
{
  OP_MLT();

  OP_MLT_REAL();
  int i;
  printf("a_output: ");
  for (i = 0; i < n; i++) {
    printf("%x ", a_output[i]);
  }
  printf("\nb_output: ");
  for (i = 0; i < n; i++) {
    printf("%x ", b_output[i]);
  }
 
  int j;
  int equal = 1; // Assume the arrays are equal
  for (j = 0; j< n; j++) {
    //printf("%x",a_output[i], b_output[i]);
    if (a_output[j] != b_output[j]) {
      equal = 0;// The arrays are not equal
      break;
    }
  }

  if (equal) {
    printf("\nThe two arrays are equal\n");
  } else {
    printf("\nThe two arrays are not equal\n");
  }

  return 0;
}




  