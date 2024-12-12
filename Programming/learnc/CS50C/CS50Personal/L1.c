// Adding libraries containing functions that can be used in the program
#include <stdio.h>
#include <cs50.h>

// Function prototype
int add(int a, int b);

// function that is executed first when the program is executed
int main(void)
{
  // prints out the given string as output in the console
  printf("Hello, world!\n");


  // printf() formate cods
  printf("This is a number %i.\n", 12);


  // Variables
  printf("============Variables===========\n");
  string name = get_string("What is your name? ");
  printf("Hello, %s\n", name);

  const unsigned int age = get_int("How old are you? ");

  // Incrementing an `int` value
  int num = 0;
  num = num + 1;
  // Same as
  num += 1;
  //same as
  num++;  


  // Conditionals
  printf("===========Conditionals==========\n");
  if (age > 18)
  {
    printf("%s, is an adult.\n", name);
  }
  else if (age == 18)
  {
    printf("%s, just became an adult.\n", name);
  }
  else
  {
    printf("%s, is not yet an adult.\n", name);
  }


  // Loops
  // while loop
  printf("===========WHILE LOOP============\n");
  num = 0;
  while (num<11)
  {
    printf("The number is %i\n", num);
    num++;
  }

  // for loop
  printf("=============FOR LOOP=============\n");
  for (int i = 0; i < 11; i++)
  {
    printf("The number is %i\n", i);
  }

  // do while loop
  printf("===========DO WHILE LOOP===========\n");
  int i = 0;
  do
  {
    printf("The number is %i\n", i);
    i++;
  } while (i<11);
  

  // Integer overflow
  printf("==========Integer overflow==========\n");
  int a = 1;
  int b = 3;

  // Truncations
  printf("1 / 3 is  %i\n", a/b);

  // Floating point imprecision using float (32 bit)
  printf("1/3 is %.20f\n", (float) a / (float) b);
  // Floating point imprecision using double (64 bit)
  printf("1/3 is %.20f\n", (double) a/ (double) b );
  return 0;
}


int add(int a, int b)
{
  int c  = a+b;
  return c;
}








