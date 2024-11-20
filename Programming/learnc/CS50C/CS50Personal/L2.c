#include <stdio.h>
#include <cs50.h>
#include <string.h> // Standard library for string related functions

int main(int argc, string argv[])
{
  // Arrays
  int numAr[5];
  numAr[0] = 16;
  numAr[1] = 17;
  numAr[2] = 18;
  numAr[3] = 19;
  numAr[4] = 20;

  int numArr[5] = {11,12,13,14,15};
  
  printf("The second element of numAr is %i\n", numAr[1]);
  printf("The second element of numArr is %i\n", numArr[1]);


  // using string.h 
  // length of a string
  string name = argv[1]; // accessing the first command line argument after the name of the execuitable
  printf("The name is %lu characters long.\n", strlen(name));


  // comparing strings
  if (strcmp(name, "David") == 0) {
    printf("The name is David,\n");
  } else {
    printf("The name is not David.\n");
  }

  
  return 0; // return value / exit status
}
