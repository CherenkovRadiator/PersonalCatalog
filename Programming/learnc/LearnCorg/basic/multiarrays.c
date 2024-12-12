#include <stdio.h>

int main(void)
{
  /*multidimensional array declaration*/
  /*type name[d1][d2][d3]...[dn]*/
  int multiar[3][3] = {
    {1,2,3},
    {4,5,6},
    {6,7,8}
  };
  printf("%i\n", multiar[1][2]);
  
  /*the first dimension can be empty in it.*/
  int mmultiar[][2] = {
    {1,2},
    {3,4}
  };;
  printf("%i\n", mmultiar[1][0]);
  return 0;
}
