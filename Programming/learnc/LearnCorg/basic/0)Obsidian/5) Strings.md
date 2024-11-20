Strings in c is an arrays of characters. We can use pointers to create strings like:
```
char * name = "John Wick";
```
This string made using pointer is read only and can no be manipulated. If we wish to define a string that can be altered we will need to create a normal array like:
```
char name[] = "John Wick";
/*same as*/
char name[10] = "John Wick";
```
The string `"John Wick"` is 9 characters is long but we add one to account for a termination character which is equal to 0, this tells compiler when the string end because while printing the program does not know the length of the string.
C has a standard library that provides with a number of useful function for strings which is `string.h`.
## String formatting with `printf`
`%s` is the string format specifier used to print out strings
```
char * name = "John Smith"

printf("The name is %s\n", name); // The name is John Smith
```
## String length
The function `strlen()` return the length of the string
```
char * name = "John";

printf("The name is %i characters long\n", strlen(name));
```
## String comparison
The function `strncmp()` compares two strings, returning 0 if they are equal, a different number otherwise.
```
char * name  = "John";

if (strncmp(name, "John") == 0) {
	printf("Nice to meet you John\n");
} else {
	printf("You're not John\n");
}
```
## String Concatenation
The function `strncat` appends first n character of source character to the destination string. The arguments passed are destination string, source string and n - max number of characters to append.
```
char dest[] = "hello";
char src[] = "john";
strncat(dest, src, strlen(src));
printf("%s\n", dest);
```
