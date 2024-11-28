# Source Code
Source code is the actual code written in a programming language which is then converted into machine language (0's and 1's) using a program called compiler to actually perform the tasks that the program should.
# Hello, world!
```c
#include <stdio.h>

int main(void) 
{
	printf("Hello, world!\n");
}
```
Here, `main()` is the function from which the program starts to run and `printf()` function prints out the given statement as output.
In terminal `code hello.c` is used to create a new file in VScode, `make hello` to convert the C source code to machine language of 0's and 1's creating a file of same name but no extension and lastly `./hello` to run/execute that file. The `\n` in above string is an escape character that represents new line. An escape character is a character that defines a character that is not on a normal keyboard like new like, currency symbols, math symbols etc.
[[1)Hello,world!]]

---
# Header file
These are the files that end in `.h` and can be used in a program to utilize the functionality that is coded in them like `stdio.h` in hello world program. These are included in the program using `#include <stdio.h>` syntax. These libraries generally have manual pages online describing how to use them.

---
# printf()
`printf()` can take multiple arguments, first one of which is always the string to be printed out and rest are the values that can be formatted into the string using format specifiers respective to the string. like:
```c
string name = "Harry";
printf("Hello, %s", name);
```
`printf()` is part of the `stdio.h` header file therefor it is required to include it in order to utilize `printf()`.

---
## Format specifier
These are the special characters specific to a data type defining how a value of the variable should be interpreted and represented for example `%s` for strings, `%i` for integers etc.

---
# Conditionals
These are the statements that control the flow of a program. `if` statement defines the first condition where the control flow starts from, `else if` defines subsequent conditions to be checked and in the end `else` is used to execute code when non of the previously defined conditions result in true. Syntax for control flow is:
```c
if (intitial condition)
{
	Code to be executed if the initial condition is true 
}
else if (subsequent condition) 
{
	Code to be executed if the condition is true
}
...
...
else 
{
	Code to be executed if all the other conditions result is false
}
```
## Comparison operators in C

| Operator | meaning                  |
| -------- | ------------------------ |
| <        | less than                |
| >        | greater than             |
| ==       | equal to                 |
| !=       | not equal to             |
| <=       | less than or equal to    |
| >=       | greater than or equal to |
[[4)Conditions]]

---
# Variables
Variables are used to stores data. Variables in c have a specified data type which tell the compiler what kind of data does the variable hold and how it shall be represented. Syntax for creating variables is:
```c
// data_type variable_name = value;
int num = 0;
```
Incrementing an integer value is common task in programming and there are multiple ways to do so:
```c
num = num + 1;
num += 1;
num++;
```
## Constant
These are the variable that can not be changed once their value is defined. To create it we simply have to add the keyword `const` before the data type and the variable name like:
```c
const int num = 18;
```

---
# Data Types
How the data (0's and 1's) are interpreted and represented depend on the data type the data is given. C has multiple data types some of which are:
- int / signed int - for integers (16-32 bit)
- Char / signed char - for single or a few character(s) (8 bit)
- long  - for integer value with higher range (32 bit)
- long long - for integer value with higher range than long (64 bit)
- float - for real numbers (numbers with decimal) (64 bit)
- double - for floats but has higher precision (128 bit)

| Data type                                                              | About                                           | Bits  |
| ---------------------------------------------------------------------- | ----------------------------------------------- | ----- |
| char<br>signed char                                                    | for single or a few character(s)                | 8     |
| short<br>signed short                                                  | for integers                                    | 16    |
| int<br>signed int                                                      | for integers                                    | 16-32 |
| long<br>long int<br>signed long<br>signed long int                     | for integer value with higher range             | 32    |
| long long<br>long long int<br>signed long long<br>signed long long int | for integer value with higher range than long   | 64    |
| float                                                                  | for real numbers (numbers with decimal)         | 32    |
| double                                                                 | for floats but has higher precision             | 64    |
| long double                                                            | for floats but has higher precision than double | 128   |
Note that here signed data types are the once that can have both positive and negative values in which case half of the bits are used for negatives and other half for positives out of the total range of bits. There are also unsigned data types of the same which only store positive values but can make use of all the bits for it allowing to represent higher numbers but only positives.
[[2)VariablesAndTypes]]

---
# Loops
Loops allow us to run a piece of code again and again meaning iterate the piece of code. There are mainly who types of look *for* loop and *while* loop. The only major difference between the two is that variables and their increment for how many times a the loop should iterate is included along with the statement of for loop where as in case of while loop the variable are defined and incremented outside of the while statement.
Syntax for *for* loops:
```c
for (variable initialization, condition, variable increment)
{
	Code to be executed;
}
```
Syntax for *while* loops:
```c
int i = 0;
while (condition)
{
 Code to be executed;
 i++; // incrementing the value
}
```
## Do While
Another way to use *while* loop is with *do*. In this case code in *do* block is executed with a *while* loop condition. The syntax for it is:
```c
do 
{
	code to be executed
} while (condition);
```
## Loop Directives
These include `break` and `continue`. When used the `break` will end the loop ignoring any code after it and `continue` will ignore any code after it start the next iteration of the loop.
[[6)Loops]]

---
# Function definition
The ability to define our own function allows us to reuse a particular piece of code wherever needed without having to write the whole code again but just by calling the function. The syntax for creating functions is:
```c
return_type function_name(arguments)
{
	Code to be executed;
	return return_value;
}
```
Here *return_type* is the data type of the return value of the function (if nothing is returned it will be `void`) following which is the name of the function and then the arguments it will take in the parentheses. Inside the code block is the code that will be executed when the function is called and in the end the return statement which will return the value when the function completes executing. Any code after the return statement is not executed because return statement marks the end of a function.
The first line of the function definition (`return_type function_name(arguments)`) is called ***function prototype***. Since most of the code is written in `main()` and function needs to be defined before it can be called we can use just the function prototype alone and place it before the `main()` function so we don't get error when the function is called inside of `main()` and the function will work as it is supposed to because when called the compiler will point to the actual function which has the code to be executed.
[[7)Functions]]

---
# Comments
Comments are line in the code that compiler ignore hence are not interpreted. These lines are meant to be someone else reading the code telling more about it. Three are multiple types of comments namely single line comments and multi-line comments. Single line comments are written using `//` before the comment and multi-line comments are written using `/*` before and `*/` after the comment.

---
# Integer Overflow
This is the problem that occurs when the storage space dedicated to the store an integer is not large enough to store that integer and the bits "overflow" or wrap around to start the count of integer from the starting point or 0-bits. For example in case of 8-bit integers the highest possible value that can be represented is 256, any number higher than that creates integer overflow whereby 256 gets subtracted from the number and what's left gets represented.
## Truncation
This occurs when we try to divide an integer by another and convert it into float, the part of the number after the decimal get converted to all 0 s. For example 1 divided by 3 is 0.3333... but if the numbers are of type `int` the answer will come out to be 0.00000000.
## Floating-point imprecision
This is the problem of how precisely a floating point number (real number) can be represented. Since this precision depends on how many bits can be represented after a certain points of value integer overflow occurs giving the wrong value. For example 1 divided by 3 is 0.333... but due to the floating-point imprecision the number gets represent as 0.33333334326744079590 if divided as float (32 bit) and as 0.33333333333333331483 if divided as double (64 bit).

---
# Type casting
This is explicit conversion of data type of a value after it has been defined. It is done by mentioning the data type right before the value in parentheses like:
```c
int num = 18;
printf("The number in float is %f", (float) num); // output>> The number in float is 18.000000
```

---
# Scope
Scope is the extent to which a variable is visible (usable) in a program. The scope of a variable only extends to the last curly braces it is in, the variable can not be accessed outside of those curly braces. If a variable is not encapsulated (covered) by any curly braces then it is considered a global variable and can be accessed at any point throughout the file. For example:
```c
int gnum = 18; // global variable can be accessed anywhere in the file.

int main(void)
{
	int mnum = 20; // local variable (local to main function) can only be accessed inside main function.
}
```

---
