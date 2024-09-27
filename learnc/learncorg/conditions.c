#include <stdio.h>

int main(void)
{
  int age = 20;

  if (age < 18) {
    printf("you are not an adult yet since you are only %i years old.\n", age);
  } else if (age > 18) {
    printf("you are an adult since you are %i years old.\n", age);
  } else {
    printf("you are also an adult since you are exaclty %i years old.\n", age);
  }

  return 0;
}
