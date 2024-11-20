#include <stdio.h>
#include <stdint.h>

int main(void)
{
  int num1 = 3;
  int *num2 = &num1;

  printf("%i\n", num2);
  printf("%p\n", num2);
  return 0;
}
