# Data types
C has different types of data types which define how data is stored, processed, presented and worked on.
Some basic data types are:
- Integer: whole numbers that can either be positive or negative. Defined using -> `int`, `char`, `short`, `long` and `long long`.
- Unsigned integer: whole number which can only be positive. Defined using -> `unsigned int`, `unsigned char`, `unsigned short`, `unsigned long` and `unsigned long long`.
- Floating point numbers: Real numbers (numbers with decimal point). Defined using -> `float` and `double`.
- Structures
Data types defines the bounds of a variable i.e. how small or large variable can be in memory. For example -> data type `char` can only range from -128 to +127 (1 byte so 256 possible combinations), whereas a `long` can range from -2,147,483,648 to 2,147,483,647 (`long` and other numeric data types may have another range on different computers, for example - from –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 on 64-bit computer).
There is no boolean type in c but they can be defined using
```
#define BOOL char
#define TRUE 1
#define FALSE 0
```
# Variables
In order to store data to use in a program we need to create variables. Variables store a data of a specific data type. To define a variable the syntax is
```
// [Data type] [variable name] = [value];
int num = 24;
```
A variable is defined by using the above syntax. Now the variable `num` can be used for the value `24`.
We can also define multiple variables simultaneously using the following syntax,
```
int a, b, c, d = 11, 12, 13, 14;
```
Here variables `a`, `b`, `c` and `d` have values `11`, `12`, `13` and `14` respectively and all of them are integers. Only the variables of one data type can be defined this way.