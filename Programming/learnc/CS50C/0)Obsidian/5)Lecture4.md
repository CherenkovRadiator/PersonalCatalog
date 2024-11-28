## Hexadecimal
Hexadecimal is a base 16 number system that uses number 0-9 and characters a-f to represent data. A single place in hexadecimal can represent 4-bits worth of information. To distinguish a hexadecimal value from other `0x` is used as a prefix to hexadecimal values. Hexadecimal values are shorter and can easily represent a wider range of data, due to which they are widely used for things like memory address allocation, color representation etc.

---
# Memory
Each byte of memory has a memory location in hexadecimal. In C this location address can be accessed by using `&` before a variable name and can be printed out using `%p` format specifier.

---
# Pointer
Pointer is a variable just like any other, the only difference is that pointer are used specially to hold memory addresses. To define a pointer a `*` is used right before the variable name. This tells the compiler that the variable is a pointer variable. like:
```c
int num = 1;
int *numPtr = &num;
printf("The memory address of num is %p", numPtr);
```
Note that while it is not necessary it's better to define pointer variable with data type same as that of the variable's that it points to.
While pointers are used to store memory addresses the value of that address can also be accessed directly using the pointer variable using `*` right before the pointer variable name. This is called ***derefrencing***. Like:
```c
printf("The value of num is %i", *numPtr);
```
[[9)Pointers]]

---
# Strings
Pointers make it easier to create string. Since string is just an array of character with end defined by '\0' (`NUL`), we can use a pointer to point at the first character of that string from where it can be start printing till the '\0' character. Like:
```c
char *name = "David";
printf("The name is %s", *name);
```
We can combine this with `typedef` to create a new data type called string. Like:
```c
typedef char *string;
string name  = "David";
printf("The name is %s", name);
```
[[12)ArraysAndPointers]]

---
# Pointer Arithmetic
Pointer Arithmetic refers to doing math on pointers. such as adding or subtracting numbers from pointers to go to the relative next or previous addresses. Like:
```c
string name = "David";
printf("Second letter of the name is %c", name[1]);
// is same as
printf("Second letter of the name is %c", *(name+1));
```

---
# String comparison
To compare two strings we must compare each character of the string. Comparing the pointer variables of string directly compares the memory addresses of the strings.

---
# Malloc
`malloc()` function returns a pointer to a chunk of memory as asked for (this is known as dynamic memory allocation). `malloc` takes only one argument that is the amount of memory to be needed in bytes. `sizeof()` function can be used along side it which can fetch the needed size for a data type depending on the computer rather than hard coding the size to `malloc()`. like:
```c
int * num = malloc(sizeof(int)); // sizeof(int) will return the size required by one integer be it 4 or 6 depending on the hardware
```
Same can also be used to allocate size for an array by multiplying the size of one item to the total number of items needed.
The memory allocated by `malloc()` also needs to be freed to prevent *memory leaks* (memory that is reserved but is not in use). This is done using the `free()` function which takes the pointer to the allocated memory as argument to free up that allocated chunk of memory.
[[11)Dynamicallocation]]

---
# Valgrind
Valgrind is a program that helps checking memory leaks in a c code. It is a command line tool and simply takes the code to be checked as an argument.

---
# Garbage values
These are the leftover values that were previously stored at a memory address by other programs.

---
# Memory Segments
Memory is divided into multiple parts. An overview of these includes:
- Machine Code - This is the part where the system's code and all the programs installed are kept.
- Global variable - This is the part where global variables of a program are kept.
- Heap - This is the part where heap memory starts from. This is the part of memory used for dynamic allocation and it grows downwards towards stack until it reaches stack memory.
- Stack - This is the part where normal variable are stored (one with no dynamic allocation). This is at the bottom and grows upwards towards the heap memory until it reaches it. The functions create inside the program are also stored here and once a function completes running this memory gets freed up. [[8)Static]]
---
# Memory Overflow
Memory overflow occurs when system runs out of memory to store variables or tries to store amount of data more than allocated memory. When this occurs for stack memory it's call an *Stack Overflow*, conversely if it occurs for heap memory it's called *Heap Overflow*. These are also called *Buffer Overflows*.

---
# Scanf
`scanf()` function is used to get an input from the user. It takes two arguments, first the format specifier for the input and second the memory address where the input is going to be stored.

---
# File I/O
## `fopen()`
This function is equivalent of opening a file. the function takes only two arguments:
- The path to the file
- a character which tell how the file will be using (like `'r'` to read, `'w'` to write (overwrites the contents) or `'a'` to append to file).
The function return a pointer to the file and a `FILE` data type can be given to the pointer variable that is storing it's value.
## `fprintf()`
This function is used to print to a file. It takes:
- the pointer to the file
- formatted string to how it should be written
- the variables for format specifiers in the string
## `fclose()`
This function is equivalent of closing the file once done using. It takes pointer to the file to be closed as the argument.
## `fread()` and `fwrite`
`fread()` and `fwrite()` are used to read or write data respectively from a file in the specified intervals of bytes. Both of these functions take:
- for `fread()` memory address where data can be stored temporarily while it is being read and for `fwrite()` memory address from where the data to be written is taken from
- size/number of bits/bytes to be read at once
- number of how many of the specified size chunks of data should be read/written at once
- for `fread()` the pointer to the source file and for `fwrite()` pointer to the destination file
---
