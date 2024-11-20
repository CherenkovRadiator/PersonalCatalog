#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int size;
  printf("Enter the size of your array\n");
  scanf("%d", &size); /*scanf takes the input in the format defined and stores it to the given memory address*/

  /*static memory allocation for array `ar` with memroy size of `size`*/
  /*int ar[size];*/
  
  /*dynamic memory allocation for array `ar` with memory size of `size` * size required for an interger*/
  /*sizeof() gets the minimum size for a data type.*/
  /*malloc takes the amount of memory to be allocated dynamically (size * sizeof(int) in this case).*/
  /*malloc will then return a void pointer (void *) for the dynamically allocated memory.*/
  /*we type cast the void pointer given by malloc to our required type (int in this case, using (int *)).*/
  /*and finally assigne the type casted value to the pointer ar.*/
  int * ar = (int *)malloc(size * sizeof(int));

  for (int i=0; i!=size; i++) {  
    int a;
    int numb = i;
    printf("Enter the digit for place %i\n", numb+1);
    scanf("%d", &a);
    printf("\n");
    ar[i] = a;
  }

  for (int i=0; i!=size; i++) {
    printf("the value is %i\n", ar[i]);
  }
  
  /*finally free up the allocated space.*/
  free(ar);
  return 0;
}
