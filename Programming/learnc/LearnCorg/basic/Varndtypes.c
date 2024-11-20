#include <stdio.h>

/*
 * Few basic data types in c 
 * Integers: Whole numbers positive or negative. Defined using: char, int, short, long or long long.
 * Unsigned integers: Whole number only positive. Defined using: unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
 * Floating point numbers: Real numbers (fractions). Defined using: float or double.
 * 
 * Different data types also define bounds for the variables depending on the system.
 *  */

/*No boolean data type in c. Can be defined usin:*/
#define BOOL char
#define TRUE 1
#define FALSE 0

int main(void)
{
  /*To create a variable first define the data type the variable is going to be and then name of the variable and then the value.*/
  /*dtype var_name = value;*/
  int foo;
  printf("the value of foo is %i\n", foo);
  
  foo = 1;
  printf("the value of foo is %i\n", foo);

  int bar = 2;
  printf("The value of bar is %i\n", bar);

  int a = 1, b =2, c =3, d = 4;
  a = a+b+c+d;
  printf("The valuse of a is %i\n", a);
  
  BOOL abool = FALSE;
  printf("This is a booolean data type %d\n", abool);
  return 0;
}
