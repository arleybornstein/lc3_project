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

void OP_IVT()
{
  write_value (0x903F | (0b001 << 9) | (0b001 << 6), a_output, &idx_a);
  write_value (0x1020 | (0b001 << 9) | (0b001 << 6) | (0x1), a_output, &idx_a);

}

void OP_IVT_REAL()
{
  write_value (0b1001001001111111, b_output, &idx_b);
  write_value (0b0001001001100001, b_output, &idx_b);
 
}

int main()
{
  OP_IVT();

  OP_IVT_REAL();
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




  