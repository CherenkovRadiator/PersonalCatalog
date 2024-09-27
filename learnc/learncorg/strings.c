#include <stdio.h>
#include <string.h>

int main(void)
{
  /*using pointers (explained later on)*/
  /*char * name = "harry";*/

  char name[] = "Harry";
  /*same as */
  /*char name[5] = "Harry";*/

  printf("My name is %s.\n", name);

  /*string length using stelen function (part of string.h)*/
  printf("%i\n", strlen(name));

  /*comparing two strings using strncmp functions */
  /*strncmp take the strings to compare as arguments and number of characters to be compared. return 0 if same.*/
  if (strncmp(name, "Harry", strlen(name))==0) {
    printf("Yes, your name is Harry.\n");
  } else {
    printf("Your are not the Harry ik.\n");
  }

  /*string concatination using strncat*/
  char newname[] = "Bulgaries";
  char newsname[] = "Vanisz";

  /*strncat take destination string (string to be appeneded to), source string (string to take characters from) and number of character to be appeneded as arguments.*/
  strncat(newname, newsname, 3);
  printf("The short name is %s.\n", newname);

  return 0;
}
