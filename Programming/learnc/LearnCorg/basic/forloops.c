#include <stdio.h>

int main(void)
{
  int arr[] = {11,12,13,14,15,16,17,18,19,20};
  
  /*for a `for loop` the first value is the variable to count the iteration, then the condition to stop the loop and lastly how the count for iteration should increment.*/
  for (int i=0;i!=7;i++) {
    printf("%i\n", arr[i]);
  }
  
  return 0;
}
