C functions are simple, but because of how C works, the power of functions is a bit limited.

- Functions receive either a fixed or variable amount of arguments.
- Functions can only return one value, or return no value.
In C, arguments are copied by value to functions, which means that we cannot change the arguments to affect their value outside of the function. (To do that, we must use pointers.)
The syntax for creating functions is: 
```
int printing(int val) {
	for (int i=0, i!=val, i++) {
		printf("Printing this line again and again");
	}
}

int main(void) {
	printing(10);
}
```
If the function takes arguments, what arguments it takes must be defined during the function definition, if it takes no arguments keyword `void` is used.
## Correct way to create functions
```
#include <stdio.h>

int add(int a, int b);

int main(void) {
	printf("The sum of 4 and 5 is %i", add(4,5));
}

int add(int a, int b) {
	return a+b;
}
```
The function is declared at the start which tell the compiler it exists and then the actual code for the function written after the main function. This helps keep the main function always at the top of the file.
The `return` keyword is used to create a return value of a function.
