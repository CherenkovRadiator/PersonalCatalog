#include <stdio.h>
#include <cs50.h>

int main(void)
{
  char c = get_char("Do you agree? ");
  int i = 0;
  if (c == 'y' || c == 'Y') {
    while (i < 3) {
      printf("Agreed!\n");
      i++;
    }
  }
  else if (c == 'n' || c == 'N') {
    while (i != 3) {
      printf("Not Agreed!\n");
      i++;
    }
  }
}
