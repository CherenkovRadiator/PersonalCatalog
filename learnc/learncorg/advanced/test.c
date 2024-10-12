#include <stdio.h>

int main(void)
{
  int n = 1;
  int *a = &n;
  
  /*int *b = a; This will create a pointer that will point to the value of a*/
  int **b = &a; /*This create a pointer pointing to the pointer itself since '&a' is a pointer on it's own.*/

  printf("this is a%i \n", *a);
  printf("this is b%i \n", *b);

  printf("********\n");

  int size;
  scanf("%d", &size);
  int ar[size];

  for (int i=0;i!=size;i++) {
    int item;
    printf("Enter the item value:\n");
    scanf("%d", &item);
    ar[i] = item;
    return 0;
  }

  for (int i=0;i!=size;i++) {
    printf("%i\n", ar[i]);
  }
  return 0;
}
