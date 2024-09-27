#include <stdio.h>

int main(void)
{
	printf("Hello world!\n");
	int a;
	int b = 1;
  printf("a is %i and b is %i\n", a, b);

  int ar[2][3] = {
  {1,2,3},
  {4,5,6}
  };
  printf("%i\n", ar);

  for (int i=0;i!=2; i++) { 
    for (int j=0;j!=3; j++) {
      printf("%i\n", ar[i][j]);
    }
  }
}
