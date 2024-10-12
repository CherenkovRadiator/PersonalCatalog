#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  /*creating static array*/
  int arr[7] = {1,2,3,4,5,6,7};
  int *ptr = arr;

  printf("mem address ar: %p, mem addres val ar:%p, ,mem address ptr: %p, mem address val ptr: %p\n", arr, &arr[0], ptr, &ptr[0]);
  
  /*here ar[i] and ptr[i] gives the value at `i`th position, ar+i and ptr+i give the memory address of values at `i`th position thus requiring dereferencing using '*' */
  for (int i=0;i!=7;i++) {
    printf("val:%i, mem address ar: %p, mem addres val ar:%p ,mem address ptr: %p, mem address val ptr: %p\n", arr[i],*(arr+i),&arr[i], *(ptr+i), &ptr[i]); 
  }

  printf("******************************************\n");
  
  /*dynamically allocating memory for multidimensional array.*/
  int nrows = 2;
  int ncols = 3;

  /*allocating memory for all the rows*/
  char **ar = (char **)malloc(nrows * sizeof(char *));
  
  /*allocating memory for all the columns*/
  ar[0] = (char *)malloc(ncols * sizeof(char));
  ar[1] = (char *)malloc(ncols * sizeof(char));

  ar[0][0] = 'A';
  ar[0][1] = 'B'; 
  ar[0][2] = 'C';
  ar[1][0] = 'D';
  ar[1][1] = 'E';
  ar[1][2] = 'F';

  for (int i=0;i!=nrows;i++) {
    for (int j=0;j!=ncols;j++) {
      printf("%c", ar[i][j]);
    }
    printf("\n");
  }

  free(ar);
  return 0;
}
