# Python
- Python is a high-level, interpreted programming language that's used in many applications, including web development, data science, and machine learning.
- It's known for being easy to learn and efficient.
- It is a scripting language and uses the python interpreter.
- It a has a large number of libraries to extend it's functionality.
- Single line comments are made using `#`.
- Tripe quotes (`'''...'''`) are used to create doc strings.
- Things can be printed out using `print()` function.
- Code blocks in python are defined with the levels of indentation they have.

---
# Variables
- To create a variable in python assign a value to a variable name.
- Syntax for creating variables is:

```python
Var_name = "Value"
```

- multiple variables can be assigned at once like:

```python
name, lname, age = "harry", "swami", 18
```

---
## Data Types
- Numeric data types: `int`, `float` and `complex`.
	- `int`: these are the integers like `1`, `23`, `-23`, `-1` etc.
	- `float`: these are the real numbers with decimal point like `1.01`, `6.32`, `-2.3` etc.
	- `complex`: these are the number a real part and an imaginary part to it like `1+2j`, `3+6a`, `5b` etc.
- Sequence data types: `string`, `list` and `tuple`
	- `string`: (abbreviation `str`) is a collection of characters, number or symbols. In python anything inside single, double or triple quotes in a string. (Note:- if no assigned to a variable triple quoted strings are considered to be doc strings.) like `'hello'`, `"world"`, `'''my name is 123'''`.
	- `list`: is a built-in dynamically sized ordered array. It can store multiple data types at once including another list. The data for lists is defined inside square brackets. Like: `["name", 12, ["harry"]]`.
	- `tuples`: are also like lists but are immutable meaning the data inside a tuple can not be changed once defined. Data for tuples is defined inside parentheses. Like: `("harry", 12, ("name"))`
- Mapping type: `dict`
	- `dict`: or dictionary is a python built-in hash map i.e. a data type storing data in key-value pairs. A dictionary is defined inside curlt braces like: `{"key1": "value1", "key2": "value2"}`
- Boolean: `Bool`
	- `Bool`: stores only two value `True` and `False`.
- Sets: `set`, `frozenset`
	- `set`: is an unordered collection of multiple items having different datatypes. Sets are mutable, unindexed and do not contain duplicates. The order of elements in a set is not preserved and can change. They are defined using curl braces as well like: `{1, "two", 3, "four"}`.
	- `frozenset`: is an immutable version of sets. While parts of `set` can be altered at any given moment the same cannot be done with `frozensets`. `frozenset()` function is used to create `frozenset` from an iterable like `frSet = frozenset(["harry", 1, "age"])`.
- Binary types:
	- `bytes`
	- `bytearray`
	- `memoryview`
- `type()` returns the type of a data and takes that piece of data as input. like:

```python
name = "Anjleena"
print(type(name)) # str
```

## Type Casting
- Typing casting means converting one type of variable into different data type.
- Python has built-in functions like `int()` to convert to integers, `str()` to convert to string, `float()` to convert to floating point values etc. Like:

```python
number = "12"
print(type(number)) # str
number = int(number)
print(type(number)) # int
number = float(number)
print(type(number)) # float
```

- When a string is converted into Boolean this way using `bool()`, if the string is empty the function will return `False` otherwise `True`.
- Not every data type can be converted into every other data type.

---
# User input
- Python has a built-in functionality to take user input using `input()` function.
- It prompts the user running the program to enter something.
- Anything given to it is taken in string. Type casting can be done along with it to convert string into any other data type like integer or float.
- It also takes a string as an argument to print out at the prompt before the user enters anything.

---
# Arithmetic & Math
- The Arithmetic operators in python are:
	- `+` for addition
	- `-` for subtraction
	- `*` for multiplication
	- `/` for division (answer in float)
	- `//`  for division (answer in integer)
	- `**` for exponentiation
- All of these can also be combined with `'='` to perform assignment at the same time. Like `a += b` is same as `a = a + b`.
- Math functions in python:
	- `round()`: rounds off the values passed to it.
	- `abs()`: returns the absolute value for the integer passed.
	- `min()`: returns the minimum of the numbers passed.
	- `max()`: returns the maximum of the numbers passed.
- More math related functions can be used with the help of `math` library like:
	- `math.pi`: gives value of pi
	- `math.e`: give value of Euler's number
	- `math.sqrt()`: returns the square root of the number passed
	- `math.ceil()`: returns the number rounded off to it's upper bound like 9.1 to 10.
	- `math.floor()`: returns the number rounded off to it's lower bound like 9.9 to 9.

---
# Flow control
- Syntax for if-else statements is:

```python
if condition:
	# code
elif conditon:
	# code
else:
	 # code
```

- The code blocks get defined through the indentation the code lies in.

---
# Logical operators
- There are three main logical operators in python :
	- `or`: returns true if either of the values is true
	- `and`: return true if both the values are true
	- `not`: turns true in to false and vise versa

# Conditional expression
- This is a short hand form for simple if-else statements:
- The syntax is:

```python
expression1 if conditon else expression2
```

- Here if the `condition` results in `True` then `expression1` is evaluated and returned other `expression2` is evaluated and returned.

---
# Strings

## String Methods
- There are some methods related to strings in python:
	- `len()`: takes the string and returns it's length
	- `string.find()`: takes the string to find and return the index of the first occurrence of the part where that string appears.
	- `string.rfind()`: takes the string to find and return the string of the last occurrence of the part where that string appears.
	- `string.capitalize()`: capitalizes the first letter of the string.
	- `string.upper()`: capitalizes all the letter of the string.
	- `string.lower()`: turns all the letter to lower case of the string.
	- `string.isdigit()`: returns true if the string only contains digits.
	- `string.isaplha()`: return true if the string only contains letters of the alphabet.
	- `string.count()`: takes a string and returns it's number of occurrences in the original string.
	- `string.replace()`: takes two strings as argument and replaces any occurrence of the first argument with the second argument.
- These functions can be found out about using the `help()` function with the data type to look the functions for.

## String slicing
- Strings in python are ordered and indexing meaning characters from a string can be accessed using the indexes of those characters.
- Characters can be accessed using square brackets like `string[n]` where `string` is the actual string and `n` is the index of the character to be accessed.
- Three different numbers can also be defined for start, end and step value for accessing the character like `string[start:end:step]` where character from the index value of `start` up to `end` excluding the `end` will be accessed with every character `step` away from the `start` excluded.
- For example:
```python
#        0123456789
strin = "abcdefghij"
print(strin[2:7:2]) # ceg
```

---
## Formatted Strings and String Specifiers
- Formatted strings are created by putting an `f` before the string.
- This allows for strings to be formatted i.e. contain other values or expressions inside them using curly braces like:

```python
name, age = "harry", 18
s = f"The name of this person is {name} and the age is {age}"
print(s) # The name of this person is harry and the age is 18
```

- Formatted strings have *format specifiers* which are the *flags* that allow for the values inside the curly braces to be formatted differently.
- The syntax for using these flags is `f"the string is {value:flag}"`
- Some of the flags are:
	- `:.(number)f`: round the value if integer to defined number of floating point values.
	- `:(number)`: insert defined number of spaces before the value
	- `:0(number)`: insert defined number of zeros before the value
	- `:<(number)`: left justify the value with defined number of padding
	- `:>(number)`: right justify the value with defined number of padding
	- `:^(number)`: center align the value with defined number of padding
	- `:+`: adds plus sign before the value if positive
	- `:-`: adds minus sign before the value if positive
	- `: `: adds space before the value is positive
	- `:,`: adds comma for each 1000th place like `1,000,000`
- These fags can be combined together as well for each format.

# Loops
- There are two main types of loops in python which are:

## While loop
- The syntax for while loop is:

```python
while condition:
	# code
```

## For loop
- The syntax for for loop is:

```python
for var in iterable:
	# code
```

- For loops in python are used with iterables like `range()`, string, sequence etc.
- `range()` function can take three arguments: string point, ending point and step value.
- When the for loop run the value of the `var` is changed with each value of iterable with each iteration.

---
- Loops in python can also be nested.

---
# Collection data type
- These are the data types with single variables used to store multiple items.
- These are:
	- `list`: It is an ordered and mutable array of items. It can also contain delicacy. It is defined inside square brackets like: `["harry", 18, "angleena", "harry"]`
	- `Set`: 