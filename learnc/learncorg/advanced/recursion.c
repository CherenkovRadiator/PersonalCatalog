#include <stdio.h>

int main(void)
{
  /*Call a function inside itself is called recursion*/
  int factorial(int num) {
    if (num == 0) {
      return 1;
    } else {
      return num * factorial(num-1);
    }
    return 0;
  }

  printf("%i\n", factorial(5));
  return 0;
}
