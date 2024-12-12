# Python
It is a high-level programming language. Here high level implies to how much abstraction python creates over low level details.

---
# Built-in functions
Unlike C python have some functions that come packaged with python itself.
## `print()`
`print()` function is used to print an output to the console. It takes string to be printed out as input. There are multiple ways to format strings in python on of which is using f-string.
### f-string
f-strings are formatted strings. It is used by placing an "f" before the string after which variable and expressions can be defined inside "{}" which will be evaluated as normal code and a string will be returned with value of the expression. For example:
```Python
print(f"The sum of 3 and 4 is {3+4}") # output>> The sum of 3 and 4 is 8
```
---
# Functions
To create a function `def` keyword is used. For example:
```python
def VariableName(Arguments(s)):
	# code to execute
```

When creating a function in python default values for arguments can also be set for example `end="\n"` in `print()` function and when calling a function these arguments can be called by name and change their values in the same manner.

---
 
# Variables
Variables are created using a variable name and use "=" (assignment operator) and assign the value to it. For example
```python
name = "harry"
```
---
# Data type
Python basic data type like:
- `int` for integers
- `float` for real number
- `str` for strings
- `list` for list or arrays
- `dict` for dictionaries or has tables
- `tuple` for immutable lists
etc.
Functions for each can be used to declare a variable having that particular type but no value or converting one type to another. For example:
```python
x = int() # no value inside x but data type is integer
x = int("0") # stores value 0 inside the variable of type int
```

---
# Libraries
Libraries can be included in the file using `import` keyword, and a specific function can also be included using the `from` keyword with import. For example:
``` python
import library_name
from library_name import function_name
```

---
# Conditional
For conditional python has `if`, `else` and `elif`. For example:
```python
if condition:
	# code
elif condiion:
	# code
else condition:
	# code
```

---
# Built-in methods
These are the functions that come with an object like a data type. For example, strings come with functions such as `casefold()`,  `islower()`, `isupper()` etc. that can be called using `.` operator with the object of that class.

---
# Loops
For loops in python:
```python
for i in range(n):
	# Code
```
While loops in python:
```python
i = 0
while i != 10:
	# code
	i += 1
```
Loops in python can also have an `else` block after them which will be executed if the entire loops complete without ever executing a `break` statement.

---
# Integer overflow
This is the problem that occurs when the storage space dedicated to the store an integer is not large enough to store that integer and the bits "overflow" or wrap around to start the count of integer from the starting point or 0-bits. For example in case of 8-bit integers the highest possible value that can be represented is 256, any number higher than that creates integer overflow whereby 256 gets subtracted from the number and what's left gets represented. While this a problem in other languages like C it is not a problem in python as python will automatically increases the size of a variable as needed.
## Truncation
This occurs when we try to divide an integer by another and convert it into float, the part of the number after the decimal get converted to all 0 s. While this is a problem with some other programming languages like C it is not a problem in python because it will automatically convert the values to floating point values.
## Floating point imprecision
This is the problem of how precisely a floating point number (real number) can be represented. Since this precision depends on how many bits can be represented after a certain points of value integer overflow occurs giving the wrong value. Python also allows us to limit the values to be take after the decimal using the notation:
```python
z = 1/3
print(f"{z:.50f}") # limits the number of digits after the decimal to 50
```
Even though Floating point imprecision exists in python there are also 3rd party libraries in python that allow us to tackle the problem to get more precise values for scientific and mathematical purposes.

---
# Error handling
Python allows to handle cases where an error might occur using the following:
```python
try:
	# code
except expection:
	# code
```
This basically first runs the code in `try` block and if an `exception` occurs then run the code in `except` block.

---
