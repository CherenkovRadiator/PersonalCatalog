# Introduction
C is general purpose high level programming language. Although it have higher abstraction than assembly it still provides a significant amount of lower level controls over the underlying hardware and memory. It's known for it's flexibility, efficiency and low level control.
C is a compiled language meaning in order to run a program written in c the code first needs to be processed and converted into binary format by a compiler to create an executable file.
## Key feature of C
- low-level control
- Efficiency
- Portability
- Rich standard library
- Pointer support
## Common uses
- Operating system
- Embedded systems
- Game development
- Scientific computing 
- System programming
# First Program
C itself doesn't have much functionality. Every c program uses libraries what gives it extra functionalities and ability to execute certain needed functions. The most basic function is `printf()` which prints to the screen. It is defined in `stdio.h` header file.
We must first add this header file to our program on the very first line using 
```c
#include <stdio.h>
```
Next part of the code is the actual code that we will write and want to be executed. The first code which will run will always reside inside the `main()` function like
```c
int main(void) {
	...our code...
}
```
Here the keyword `int` means that the function `main()` upon complete execution will return an integer value. This returned number indicates weather the function executed correctly or not and in case of `main()` it indicated weather the program that we wrote executed correctly or not. If the program ran successfully we return the value of 0, any other number indicates that there was some error during the execution of the code.
To return a value we use the statement,
```c
return 0;
```
Every statement in C ends with a semicolon `;`, so that the compiler knows that a statement has end and a new one can start now.
## Everything Together Now
Now we can piece everything together to make our programming using `printf()`.
```c
#include <stdio.h>

int main(void) {
	prinf("Hello, world!");
	return 0;
}
```
This is the basic structure of programming in c. This particular program prints out the words 'Hello, world!' upon execution.
