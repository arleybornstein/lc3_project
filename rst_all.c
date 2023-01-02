//testing the write_values we use in SUB 
#include <stdio.h>

int a_output[10];
int b_output[10];
int n = sizeof(a_output) / sizeof(a_output[0]);
int idx_a=0;
int idx_b=0;

void write_value(int val, int *output, int *idx)
{
  output[*idx] = val;
  (*idx)++;
}

void OP_RSTA()
{
  write_value (0x5260, a_output, &idx_a);
  write_value (0x54A0, a_output, &idx_a);
  write_value (0x56E0, a_output, &idx_a);
  write_value (0x5920, a_output, &idx_a);
  write_value (0x5B60, a_output, &idx_a);
  write_value (0x5DA0, a_output, &idx_a);
  write_value (0x5FE0, a_output, &idx_a); 
           
}

void OP_RSTA_REAL()
{
  write_value (0b0101001001100000, b_output, &idx_b);
  write_value (0b0101010010100000, b_output, &idx_b);
  write_value (0b0101011011100000, b_output, &idx_b);
  write_value (0b0101100100100000, b_output, &idx_b);
  write_value (0b0101101101100000, b_output, &idx_b);
  write_value (0b0101110110100000, b_output, &idx_b);
  write_value (0b0101111111100000, b_output, &idx_b);
}

int main()
{
  OP_RSTA();

  OP_RSTA_REAL();
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
    printf("The two arrays are equal\n");
  } else {
    printf("The two arrays are not equal\n");
  }

  return 0;
}




  