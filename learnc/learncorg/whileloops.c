#include <stdio.h>

int main(void)
{
  int i = -1;

  while (i!=10) {
    i++;

    if (i>7) {
      printf("this is the end.\n");
      break; /*The loop ends after break direcitive*/
    } else if (i%2==0) {
      printf("it's even because i is %i.\n", i);
      continue; /*The loop goes back to it's starting position and ignores everyting else after it.*/
    }
    printf("it's odd becuase i is %i.\n", i);
  }
  return 0;
}
