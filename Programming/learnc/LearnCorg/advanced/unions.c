#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
  
  // unions are like structure but they only store only one member at a time.
  // unions store everything only at one locaton. size of a union is equal to the size of the largest member of union.
  // this can be used to store values of different data types at one memory location as needed.
  union multiArry {
    // an int is of size 4 and char is of size 1.
    // we need to store 6 integers thus we need to alocate total size of sizeof(int)*6 = 24 bytes.
    char CharAr[24];
    int ar[6];
  };

  union multiArry first;

  first.CharAr[0] = a;
  first.CharAr[1] = b;
  first.CharAr[2] = c;
  first.CharAr[3] = d;
  first.CharAr[4] = e;
  first.CharAr[5] = f;

  for (int i=0;i!=6;i++) {
    printf("first.CharAr[i] = %d, size = %i\n", first.CharAr[i], sizeof(first.CharAr[i]));
  }

  first.ar[0] = a;
  first.ar[1] = b;
  first.ar[2] = c;
  first.ar[3] = d;
  first.ar[4] = e;
  first.ar[5] = f;

  for (int i=0;i!=6;i++) {
    printf("first.ar[i] = %d, size = %i\n", first.ar[i], sizeof(first.ar[i]));
  }
  return 0;
}
