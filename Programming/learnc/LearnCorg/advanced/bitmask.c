#include <stdio.h>

int main(void)
{
  // 256  128 64 32 16 8 4 2 1
  int a = 12; // 12 = 00001100
  int b = 4;  //  4 = 00000100
  int z = 0;  //  0 = 00000001

  z = a & b;
  printf("z = %d\n", z); // 4 = 00000100

  z = a | b;
  printf("z = %d\n", z); // 12 = 00001100
  
  z = a << 2;
  printf("z = %d\n", z); // 48

  z = b >> 2;
  printf("z = %d\n", z); // 1 
  return 0;
}
