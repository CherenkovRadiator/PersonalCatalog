# Functions
- The syntax to create your own functions in python is:
```python
def function_name(arguments):
	# Code
	return exit_status
```
- Python allows for different types of arguments like: 
	- ***Default Arguments***: A function in python can have default value given by: `arg_name = value` which will be used if no value is passed for the value of that argument i.e. if an argument is default argument then no value needs to be passed to during function call for that argument.
	- ***Positional Arguments***: These are the argument which are defined by the position in the order in which the arguments are defined in function definition. like:
	```python
	def fun(arg1, arg2):
		# Code
		return 0
	fun("val1", "val2") # arg1 = val1 and arg2 = val2
	```
	- ***Keyword Arguments***: During function call the argument can also be passed using the name of the argument despite the relative position like:
	```python
	def fun(name, lname):
		print(f"{name} {lname}")
		return 0
	fun(lname="squarepant", name="spongebob") # spongebob squarepants
	```
	Here, the value for the arguments was assigned directly to the corresponding argument. 
	**NOTE:-** If the keyword arguments and positional arguments being passed to the function call, then positional arguments must passed in there respective order before all the keyword arguments.
	- ***Arbitrary Arguments***: This is a way of defining arguments such that a variable amount of arguments can be passed to it. There are two ways to define arbitrary arguments:
		- `*args`: creates a tuple named `args` of positional arguments passed to the function.
		- `**kwargs`: creates a dictionary named `kwargs` of keyword arguments passed to the function.
	Here, `args` and `kwargs` are arbitrary names for the respective tuple and dictionary and can have a different valid name, the only part that matter is the `*` and `*`. While defining the function, **the `*args` must be defined before `**kwargs`**. For example:
	```python
	def fun(*args, **kwargs):
		print("Positional Arguments-->")
		for arg in args:
			print(arg)
	
		print("Keyword Arguments-->")
		for key, value in kwargs.items():
			print(f"{key} = {value}")
	
		return 0
	fun("arg1", "arg2", key1="value1", key2="value2")
	# OUTPUT:
	# Postional Argument-->
	# arg1
	# arg2
	# Keyword Arguments-->
	# key1 = value1
	# key2 = value2
	```
- The data type of value to be expected is defined by placing the data type name after the argument like: `arg_name: int`.
- The data type of the return value can be given by using `->` like: `def fun() -> int:`
---

# Iterables
- These are the objects that when iterated over can return it's elements one at a time.
- Like: list, tuple, strings, sets, dictionaries
---

# Membership operators
- These are the operators that are used to used to test whether a value is found in a sequence.
- There are two main membership operators:
	- `in`: returns true if the value is **in the sequence***.
	- `not in`: return true if the value is **not in the sequence**.
---

# List comprehension
- It is a more concise way of creating lists using a single line for-loop and conditional expressions.
- The syntax for simple list comprehension using for loops:
```python
lis = [x*2 for x in range(1,11)] # [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
```
- It can also have conditional expressions with it as well like:
```python
lis = [x*2 for x in range(1,11) if x%2==0]
```
---
# Match Cases (Switch)
- The syntax for switch statements in python is:
```python
match expression1:
	case value1:
		# code
	case value2:
		# code
	...
	case _:
		# code
```
- Here whenever the value in `match` statement matches a value in any of the following `case` statements the code of that block is executed.
- If none of the values match then the code in `_` case statement is executed.
---
