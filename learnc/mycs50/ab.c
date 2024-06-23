#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int i = 0;

  // Loop are a way to make a piece of code to work repeatedly as long as the given condition evolves...
  // ...to true.

  // 'while' loops are created using the 'while' keyword followed by the condition in parantheses.
  // The variables for the condition in the while loop have to be created before the loop is initiated.
  // And increamented inside the loop. The code to be executed in loop has to be defined using curly braces.
  while (i != 5) {
    printf("i = %i\n", i);
    i++;
  }

  // 'for' loops are created using the 'for' keyword followed by initializing variable that will be updated...
  // ...during the loop then the condition to perfome the loop and then the increment value for the variable...
  // ...all sepetated by semicoln inside parantheses.
  for (int j = 0; j < 5; j++) {
    printf("j = %i\n", j);
  }
}
