#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int row;
  int column;

  do {
    row = get_int("Row: ");
    column =  get_int("Column: ");
  } while (row<1 || column<1);

  for (int i = 0; i<row; i++) {
    for (int j = 0; j<column; j++) {
      printf("#");
    }
    printf("\n");
  }
}
