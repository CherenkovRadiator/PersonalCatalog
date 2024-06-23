#include <stdio.h>
#include <cs50.h>

void meow(int tms);

int main(void)
{
  meow(10);
}

void meow(int tms)
{
  for (int i = 0; i<tms; i++) {
    printf("meow\n");
  }
}
