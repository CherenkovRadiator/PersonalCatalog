#include <stdio.h>

/*giving arguments has normal varibales the function will make a copy of that variable and makes changes to it.*/
int subb(int num) {
  (num)--;
  return num;
}

/*givnig a pointer as an argument, the function will make changes to the value at the memory location of the variable's value i.e. the original value.*/
int addd(int * num) {
  (*num)++;
  return 0;
}

int main(void)
{
  int numb = 1;
  subb(numb);
  printf("%i\n", numb);
  printf("%i\n", subb(numb));
  
  int first = 1;
  addd(&first); /*The argument must be derefrenced for pointers.*/
  printf("%i\n", first);

  /*using pointers with stuctures*/
  typedef struct {
    int one;
    int two;
  } twoval;
  
  /*giving pointer structures as arguments instead of giving each member as pointer*/
  int changing(twoval *val) {
    /*(*val).one++;*/
    /*(*val).two--;*/
    val->one++; /*Same can be done using '->' operator for pointers*/
    val->two--;
  }

  twoval newval;
  newval.one = 1;
  newval.two = 1;

  changing(&newval); 
  printf("newval one is %i, newval two is %i\n", newval.one, newval.two);
}
