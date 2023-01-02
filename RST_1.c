int a_output[]={4000};
int n = sizeof(a_output) / sizeof(a_output[0]);
int idx=0;

void write_value(int val)
{
  a_output[idx] = val;
  idx++;

}
void OP_RST()
{
  write_value(0x5020| (0b01 << 9) | (0b01 << 6) | (0x0 & 0x1F));
  
}
void OP_RST_REAL()
{
  write_value(0b0101001001100000);
}

int main()
{
  OP_RST();
  OP_RST_REAL();

  int i;
  
    for (i = 0; i < idx; i++) {
       if (a_output[i] == a_output[i+1]) {
      printf("OP_RST and OP_RST_REAL are equal.\n");
    }
  }
  return 0;
  
}

  