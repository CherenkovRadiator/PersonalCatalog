#include <stdio.h>

int main(void)
{
  /*pointer are the variable that hold the value of memory address of a data/value*/
  char ar[] = "Harry";
  
  /*pointers are defined using "*" after the type of the value and before the name of the pointer variable*/
  /*The type of the pointer variable should be same as the type of the value*/
  /*"&" is used to tell the compiler to fetch the momory address of the data/value. This is known as dereferencing.*/
  char (*pAr)[] = &ar;
  printf("The value is %s\n", pAr);
  printf("The address is %p\n", *pAr);
  return 0;
}
