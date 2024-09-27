#include <stdio.h>

int main(void)
{
  int matrix[3][3] = {
  {1,2,3},
  {4,5,6},
  {7,8,9}
  };
  
  int matrixx[3][3] = {
    {11,12,13},
    {14,15,16},
    {17,18,19}
  };

  for (int i=0;i!=3;i++) {
    for (int j=0;j!=3;j++) {
      int fin = 0;
      for (int k=0;k!=3;k++) {
        int a = matrix[i][k];
        int b = matrixx[k][j];
        fin += a*b;
      }
      printf("%i\n", fin);
    }
  }

  return 0;
}
