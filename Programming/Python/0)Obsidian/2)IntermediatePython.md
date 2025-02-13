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

# Modules
- Any python file is called a module.
- A module can be imported (included) in any other module or any specific function or variables of it.
- There are multiple ways to import that are:
	- Importing whole module and then using parts of it:
	```python
	import module_name
	module_name.function_name()
	```
	- Importing the whole module with and alias:
	```python
	import module_name as mn
	mn.function_name()
	```
	- Importing specific part of  a module:
	```python
	from module_name import function_name
	function_name()
	```
	Multiple can be imported the same way using comma between the names of the functions.
	- Import all the parts of the module:
	```python
	from module_name import *
	function_name()
	```
	This eliminates the need to call any function with name of the module or alias but directly. But it can result in the conflicts with the function or names in the current program with those in the module being imported.
- These modules are the ones that come with python by default, the ones that are downloaded using `pip` or the ones created by yourself in which case the module must be either in the same directory or the full path relative to current file must be specified.
---

# Scope
- The scoping scheme in python is: 
	`Local > Enclosed > Global > Built-in`
- ***Local Scope***:  is the scope of the function or the loop the variable is defined in i.e. the variable is only visible inside the function or loop it is defined in.
- ***Enclosed Scope***: is the scope of enclosure in which the local scope exists i.e. if there are two nested functions or loop then the variables defined in the outermost function or loop will be visible to all the function and loops nested within it but the variables created in the nested loops and function will not be visible to the parent loop or function.
- ***Global Scope***: It is the scope of the entire program i.e. the variables created in the program will be visible to the entire program.
- ***Built-in***: It is the scope of the modules imported to the program i.e. the variables created in the modules imported will be visible throughout the program.
- The priority of the variables is same as well i.e. **Global** variable will be taken over **Built-in**, **Enclosed** will be taken over **Global** and **Local** variables will be taken over **Enclosed**.
---

# `__name__` == "\_\_main\_\_"
- `__name__` is a python's built-in attribute that hold's the name of the module/script it's being used in.
- If `__name__` is equal to `"__main__"` then the attribute is being called in the module/script being executed it self otherwise it will hold the name of the script it is being called in as it's value.
- It is used to make sure that a block of code only runs when the module/script itself is being run and not when the module/script is being imported into any other module/script.
- For example:
Script1:
```python
def main1():
	print(f"This is {__name__}")

if __name__ = "__main__":
	main1()
```
Script2:
```python
import Script1

def main2():
	print(f"This is {__name__}")

if __name__ = "__main__":
	main2()

Script1.main1()
```
Case 1, when Script1 is executed:
```
This is __main__
```
Case 2, when Script2 is executed:
```
This is __main__
This is Script1
```
Case 3, when Script2 is executed if Script1 didn't have the if statement:
```
This is Script1
This is __main__
This is Script1
```
- i.e. during import the code in the module being imported is also executed thus `__name__` gives a way to write code in the modules and allow that code to be executed only when that module itself if being executed and prevent the code from being executed if that modules is being imported to any other module.
---

# Classes and Objects
- **Classes** are constructors that define a structure i.e. attributes and methods (functions) that instances of that class will have.
- An instance of a class is called **object**.
- The syntax for creating a class:
```python
class nameOfClass:
	def __inti__(self, attribute1, attribute2):
		self.attribute1 = attribute1
		self.attribute2 = attribute2

	def methodName(self):
		# Code
		return 0
```
 - This will create class names `nameOfClass`.
 - Here the first function created with `__inti__` is called the constructor function and is used to define the attributes of the class that will be associated to the object that will be created using the class. The arguments defined in this function are the ones that will be passed to the object upon it's creation.
 - `self` in a class definition refers to the instance of the class (the object of the class). It is passed as the first argument to every function defined in the class definition and when those functions are called the python passes the object as `self` on it's own.
- The syntax to create objects of a class:
```python
def nameOfClass:...

obj = nameOfClass(attr1, attr2)
```
- Here `obj` is the object of class `nameOfClass`. `nameOfClass()` is the constructor function created inside the class and has the same arguments (which are used for creating attributes) 
- Accessing the object's attributes and methods:
```python
objA1 = obj.attribute1
objA2 = obj.attribute2

obj.methodName()
```
- The methods and attributes related to the object are accessed using the dot notion (using `.` operator).
- Multiple instances of a class can be created with there one separate attributes. The all will2 have the same methods and types of attributes associated to them but different values for each.

## Class variables
- These are the variables that are defined outside of the constructor.
- It is acts as an attribute for each instances of that class (i.e. it is accessed the same way as any other attribute of that instance) but is same for all the instances of that class as defined in the class definition. Like:
```python
class nameOfClass:
    var = "some values"

    self __inti__(self, attribute):
        self.attribute = attribute

obj = nameOfClass(attr)
obj.attribute # attr
obj.var # "some values"

obj2 = nameOfClass(attr2)
obj.attribute # attr2
obj.var # "some values"
```
- Here both the objects `obj` and `obj2` have there own unique attributes `attr` and `attr2` respectively but the class variable `var` is exists for both and is same `"some values"`.

## Inheritance
- Classes in python have the ability to incorporate structure of other classes in them (i.e. their attributes and methods) this is calles **Inheritance**. For example:
```python
class animal:
    def __inti__(self, name, life):
        self.name = name
        self.life = life

    def aboutAni(self):
        print(f"The animal's name is {self.name}")

class prey(animal):
    def aboutPrey(self):
        print(f"This animal is a preyer!")

class predator(animal):
    def aboutPredatro:
        print("This animel is a predator!")
```
- Here the classes `prey` and `predator` also have the methods and attributes of the class `animal`.
- When a objects is created from any of the classes it will *inherit* the attributes the methods and attributes of the parent class as well.
- If the object is created from a class and the class has a constructor of its own the object will only take the attributes defined in this class and not the parent class same goes for the functions that have the same name in both the classes.
- A class can also have multiple Inheritance i.e. multiple parent classes.
- And if a classes's parent has a parent class of it's own then the class will take the methods and attributes of both the parents. This is called ***multilevel Inheritance***.

## `super()`
- When class is created if the class has a constructor of it's own then the constructor of it's super (parent) class will be ignored.
- `super()` function is used to acccess constructor or methods of a super class.
- The functions returns a referrenc to the super class which then can be used to access it's methods including the constructor method. Like:
```python
class animal:
    def __inti__(self, name, life):
        self.name = name
        self.life = life
    
    def describe():
        print("This an animal")
class prey(animal):
    def __inti__(self, name, life, feature):
        super().__inti__(name, life)
        self.feature = feature
    
    def describe_prey():
        super.describe()
        print("And this animal is a prey")
```
- Here, `super()` allows `prey` class to access constructor method of the super class `animal` making it to be similar to having it's own attributes set as well as access to `describe()` method.

## Polymorphism
- Polymorphism means "many forms". In object Oriented Programming refers to the ability of objects of different classes to respond to same method call. Like:
```python
from abc import ABC, abstractmethod

class animal:
    def __init__(self, name):
        self.name = name
    @abstractmethod    
    def nameIt(self):
        print(f"my name is {self.name}")

class dog(animal):
    def nameIt(self):
        print(f"This dogs name is {self.name}")

class cat:
    def nameIt(self):
        print(f"This cats name is {self.name}")

dg = dog("Dawg")
ct = cat("Claws")

dg.nameIt()
ct.nameIt()
```
- Here, all three classes `animal`, `dog` and `cat` have a same method `nameIt`. This is Polymorphism.
- When creating polymorphous methods they must be created as **abstract methods** and it is done by using `@abstractmethod` decorator.

