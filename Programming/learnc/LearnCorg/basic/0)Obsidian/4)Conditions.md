## Comparison operators
C allows us to compare two values with use of comparison operators. These are: 
`==`  : equal to
`>` : greater than
`<` : less than
`>=` : greater than or equal to
`<=` : less than or equal to
`!=` : not equal to
`&&` : AND
`|` : OR
`!` : NOT
These operators can be used to compare two value in c to create expressions and evaluate accordingly. For example:
```
int val1 = (4 == 4) // results in 1 or true
int val2 = (4 != 4) // results in 0 or false
int val3 = (val1 && val2) // results in 0 or false since it's (1 AND 0)
int val3 = (val1 | val2) // results in 1 or true since it's (1 OR 00)
```
## Flow control
We can control the flow of program i.e. control what a program does depending on a certain condition. This is done you `if`, `else if`, and `else` in c.
## `if` statements
`if` statement is the first condition you want to check. The syntax for it is:
```
if (condition) {
	code to be executed if the condition is true.
}
```
## `else if` statements
`else if` is used when you want to check another condition if the condition given in `if` results in false. The syntax is:
```
if (conditon) {
	code for if condition
} else if (condition) {
	code for else if condition
}
```
## `else` statements
`else` statement is used to execute the code in case when all the previous conditions (conditions for `if` and `else if`) result in false. The syntax is:
```
if (condtion) {
	code for if condition
} else if (condition) {
	code for else if condition
} else {
	code for else
}
```
Note that `else` statements don't need a condition because the program will default to execute the code in `else` block if all the other conditions result in false.