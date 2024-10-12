#include <stdio.h>

int main(void)
{
  /*typedef allows us to give a different name for a data type.*/
  typedef int myint;
  myint num = 18;
  printf("%i\n", num);

  /*A Structure is a named set of variables that occupy a block of memory.*/
  /*Each variable in a structure is called a member.*/
  /*Structure is defined using struct keyword followed by the name of the structure with variables defined in the structure.*/
  struct Person{
    char * name;
    int age;
    char gender;
  };
  
  /*Structures work like data types. A new structure is defined by word struct followed by the defined structure name and name of the particular structure.*/
  struct Person pers;
  
  /*a '.' is used to access a particular variable in a structure.*/
  pers.name = "Harry";
  pers.age = 18;
  pers.gender = 'M';

  printf("The name is %s.\nThe age is %i.\nThe gender is %c.\n", pers.name, pers.age, pers.gender);
  
  /*typedef can be used with struct to create a shorthand for structures like*/
  /*here struct {...} acts as data type with no variable name and "Cars" works as the alias for this particular structure.*/
  typedef struct {
    char * company;
    int year;
  } Cars;

  /*the values then can be accessed directly by using the alias of the structure.*/
  Cars racing;
  racing.company = "nissan";
  racing.year = 2023;
  printf("The racing car's company is %s and is of year %i.\n", racing.company, racing.year);
  return 0;
}
