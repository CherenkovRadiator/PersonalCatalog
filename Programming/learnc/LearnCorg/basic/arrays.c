#include <stdio.h>

int main(void)
{
  /*arrays are special variable that hold more than one value organized with index.*/
  /*defining an array*/
  int arr[5]; /*arr, an array of 5 integers.*/ 
  
  /*indexing starts with 0 so only index position 0-4 are valid positions and can be accessed using the particular index value */
  arr[0] = 11;
  arr[1] = 12;
  arr[2] = 13;
  arr[3] = 14;
  arr[4] = 15;
  /*arrays can only have one type of variable because in memory they are implemented as sequence of values.*/
  
  printf("the 3rd value in the array is %i\n", arr[2]);
  printf("the array is %d\n", arr);

  /*No need to initialize lenth of array it will find automatically*/
  int arrr[] = {20,19,18,17,16,15};
  printf("%i\n", arrr[2]);
  return 0;
}
