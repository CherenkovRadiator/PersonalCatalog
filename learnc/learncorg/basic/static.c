#include <stdio.h>

int inc(void);

int main(void)
{
  printf("counter = %d\n", inc());
  printf("counter = %d\n", inc());
  printf("counter = %d\n", inc());
  return 0;
}

int inc(void) {
  /*static variable are the variable that act as global once but still have the same scope i.e. the value will be retained across each call of the block */
  static int counter = 0;
  counter++;
  return counter;
}
