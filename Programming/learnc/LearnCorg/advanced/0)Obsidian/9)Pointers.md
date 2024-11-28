A pointer is an integer variable that holds a memory address that points to a value, instead of holding the value itself.
## Strings as pointers
To create a pointer we need to put `*` right before the name of the variable.
```c
char * name = "Cloe";
```
This create a pointer named name of data type `char`. The variable `name` doesn't hold the value `"Cloe"` itself but rather the memory address that points to the first character `"C"` in the memory.
 When we try to access the name as char we'll obtain the first character that is `"C"` and since the memory is sequential we can access each subsequent character using indexing. When we access the pointer as string the compiler prints all the character until it reaches the null terminator (the character with the ordinal value of 0, noted as \0).
## Dereferencing
Dereferencing is the act of referring to where the pointer points, instead of the memory address. Dereferencing a pointer is done using the asterisk operator `*`.
```c
/* define a local variable a */
int a = 1;

/* define a pointer variable, and point it to a using the & operator */
int * pointer_to_a = &a;

printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);
```
The `*` before the pointer variable derefrences it to get the value it points to conversely `&` is used before a variable (data or pointer) to get the memory location of the data stored in that variable.

**NOTE**:- if `&` is used before a pointer variable, it will return the value of memory address where the pointer has stored the memory address of the data it was pointing to. If this second memory address is then stored in another pointer variable, `**` has to be used before the pointer variable name instead of `*` and the variable is known as **double pointer**.

Pointers can be passed as arguments to functions to make them act as static variables.
```c
void addone(int *n) {
    // n is a pointer here which point to a memory-adress outside the function scope
    (*n)++; // this will effectively increment the value of n
}

int n;
printf("Before: %d\n", n);
addone(&n);
printf("After: %d\n", n);
```