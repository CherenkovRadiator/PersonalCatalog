#include <stdio.h>

/*creating a function*/
int addd(int a, int b) {
  return a+b; /*function definition*/
}

/*function declaration to tell compilier that the function exists */
int multi(int a, int b);

int main(void)
{
  printf("%i\n", addd(1,2));
  printf("%i\n", multi(4,5));
  return 0;
}

int multi(int a, int b) {
  return a*b;
}
