Loops are used to run a piece of code iteratively. There are two main types of loops while loops and for loops.
## For loops
For loops in C are straightforward. They supply the ability to create a loop - a code block that runs multiple times. For loops require an iterator variable, usually notated as `i`. The syntax for for loops is:
```
int i;
for (i=0, i!=5, i++) {
	printf("The number is %i.", i);
}
```
The iterator variable can also be defined along with the for loop like:
```
for (int i=0, i!=5, i++) {
	printf("The number is %i.", i);
}
```
The first part of for loop is iterator variable and setting it's value second part is the condition, the loop will run as long as the condition is true, and lastly the increment in the value of the iterator variable.
## While Loops
While loops iterate a piece of code as long as the condition provided is results in true. The syntax is:
```
int i = 0;
while (i<10) {
	printf("The number is %i", i);
	i++;
}
```
While loops can also be executed infinitely is the condition always results in true.
## Loop directives
There are two important loop directives that are used in conjunction with all loops in C - the `break` and `continue` directives.
The `break` directive halts a loop.
```
int i = 0;
while (1) {
	if (i==10) {
		break;
	}
	printf("The number is %i", i);
	i++
}
```
The `continue` directive makes the program to ignore the code following it in the loop and start the next iteration.
```
int i = 0;
while (i < 10) {
	i++;
	if (i%2 == 0) {
		continue;
	}
	printf("The number %i is odd", i);
}
```
