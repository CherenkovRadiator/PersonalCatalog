#include <stdio.h>
#include <cs50.h>


int MergeSort(int Ar[], int len);
int BubbleSort(int Ar[], int len);
int SelSort(int Ar[], int len);
int BinarySearch(int num, int Ar[], int len);
int LinearSearch(int num, int Ar[], int len);


int main()
{
  int numAr[16] = {2,13,35,37,48,255,377,568,788,882,1334,1577,2777,3678,3689,4567};
  int n = get_int("Enter the number to search for: ");
  

  // Selection Sort
  int numArr[7] = {2,435,12,56,12,11,5};

  /*SelSort(numArr, 7);*/
  
  /*BubbleSort(numArr, 7);*/
  
  printf("%i\n", 7/2);
  MergeSort(numArr, 7);
  for (int i=0;i!=7;i++) {
    printf("%i = %i\n", i, numArr[i]);
  }


  // Linear search
  LinearSearch(n, numAr, 16); 


  // Binary search
  BinarySearch(n, numAr, 16);
  

  return 0;
}


// Merge Sort
int MergeSort(int Ar[], int len)
{
  int half = len/2;
  int ar1[half];
  int ar2[len-half];
  for (int i=0;i<len;i++) {
    if (i<half) {
      ar1[i] = Ar[i];
      printf("For ar1 %i : %i\n", i, ar1[i]);
    }
    else {
      ar2[i-half] = Ar[i];
      printf("For ar2 %i : %i\n", i, ar2[i-half]);
    }
  }
  return 0;
}

// Bubble sort
int BubbleSort(int Ar[], int len)
{
  for (int i=0;i<len-1;i++) {
    for (int j=0;j<(len-i-1);j++) {
      if (Ar[j] > Ar[j+1])
      {
        printf("Replacing ar[%i]:%i with ar[%i]:%i.\n", j, Ar[j], j+1, Ar[j+1]);
        int temp = Ar[j];
        Ar[j] = Ar[j+1];
        Ar[j+1] = temp;
      }
    }
  }
  return 0;
}


// Selection sort
int SelSort(int Ar[], int len)
{
  for (int i = 0;i!=len;i++) {
    int s = i;
    for (int j = i;j!=len;j++) {
      if (Ar[j] < Ar[s]) {
        s = j;
      }
    }
    int temp = Ar[i];
    Ar[i] = Ar[s];
    Ar[s] = temp;
  }
  return 0;  
}


// Lineary Search
int LinearSearch(int num, int Ar[], int len)
{
  for (int i=0;i!=len;i++) {
    if (Ar[i] == num) {
      printf("The number is at %i position.\n", i);
      return 0;
    }
  }
  printf("The number is not in the list.\n");
  return 0;
}


// Binary Search
int BinarySearch(int num, int Ar[], int len)
{
  int l = 0;
  int h = len;

  while (true) {
    int m = (l+h)/2;

    if (Ar[m] == num) 
    {
      printf("The item is at %i postion.\n", m);
      break;
    }
    else if (h == l+1 || l == h-1 || l==h) 
    {
      printf("The item is not in the list.\n");
      break;
    }
    else if (num > Ar[m]) 
    {
      l = m;
      continue;
    }
    else if (num < Ar[m]) {
      h = m;
      continue;
    }
  }
  return 0;
}








