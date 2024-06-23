#include <stdio.h>
#include <cs50.h>

int main(void)
{  
  string name = get_string("what's your name: ");
  printf("Hello, world! %s\n", name);

  int age = get_int("How old are you %s: ", name);
  if (age > 18) {
    printf("You are an adult with the age of %i.\n", age);
  }
  else if (age < 18) {
    printf("You are not an adult with the age of %i.\n", age);
  }
  else {
    printf("You are exactly 18.\n");
  }
}
