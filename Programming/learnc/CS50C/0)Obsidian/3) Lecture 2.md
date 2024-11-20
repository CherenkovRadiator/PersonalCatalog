# Compiling
Compiling is a 4 step process that converts the c code into machine code.
## Preprocessing
Lines that start with `#` are called preprocessor directive. It converts `#include` line with the underlying function prototypes that are used in the program, sort of copying and pasting the code for it into our own program.
## Compiling
The is the part where the C code is converted into assembly code.
## Assembling
This is the part where the assembly code is converted into binary code the actual 0's and 1's that can be executed.
## Linking 
Up till the process of assembling each file in the program i.e. included libraries and the program itself were compiled and assembled separately. So the process of linking is connecting them together and create one whole executable.

---
# Debugging
Debugging is the process of finding and fixing a problem in the source code. Debuggers are the software that allow us to debug source code.

---
# Arrays
Arrays are data structures that allows us to store a sequence of data under one name. When a variable is created the data it stores is put somewhere in the memory. When multiple variables are created then the data may or may not be sequential i.e. data of one variable may or may not start right after another variable. Arrays on the other hand make sure that data is stored in a sequential order one after the other. When arrays are created and data is stored them because the data stored is sequential we can access that data using indexing. The syntax for creating arrays:
```c
int numAr[5];
```
This creates an array of integers name `numAr` that can hold up to 5 integers i.e. it allocate enough storage to the variable `numAr` that it can store 5 integers and all of same size. Each memory location can be accessed with the same notation either to read or write to that location:
```c
numAr[0] = 11;
numAr[1] = 12;
numAr[2] = 13;
numAr[3] = 14;
numAr[4] = 15;

printf("The third element is %i", numAr[2]);
```
Note that indexing for an array starts from 0.
Equally there is another way to write all the values at once during the definition of the array:
```c
int numAr[5] = {11, 12, 13, 14, 15};
```
**Only in this manner**, if no value is given inside the braces (`[]`) with the name of array the compiler will automatically deduce the size based on the number of values given. Although same goes for defining array as an argument for a function since there is no straight forward way to know what length of array a function is going to receive.
[[3) Arrays]]

---
# Strings
A String is an array of characters. Ending of an array is defined by null character (all 0's) and is represent as `\0` in terms of char. The format specifier for a string is `%s`.
## string.h
There is a standard library in C called `string.h` that provides us with useful function to work with strings in c.
### `strlen()`
`strlen()` function takes a string as an input and returns it's length has an output.
[[5) Strings]]

---
# Command-line arguments
These are the arguments given to a command in command line to use commands functionality. The same can be done for c programs during their execution. These command-line arguments are defined as arguments to the `main()` function. These are mainly two arguments: `int argc` and `string argv[]`. `argc` is the count of how many arguments does the program take and `argv` is the array of actual array that are given to the program (it also includes the name of the executable given as command at 0th index).

---
# Exit status
These are the values that a program gives out after it's complete execution. A return value of 0 general means the program executed successfully and any other number means something went wrong. In the program it is defined at the end of the function (`main` in case of program's status code) using `return` keyword followed by the return value of data type defined during the function definition. For example:
```c
int main(void)
{
	...
	return 0; // will give out exit status 0 after execution.
}
```
Note that in command line `echo $?` will print out the exit status code of the last program executed.

---
