# Decorators
- Decorators are special function that take other functions as input and extend there functionality. 
- Syntax for creating decorators and there implementation:
```python
def topping(fun):
    def wrapper():
        print("This is the topping at the very top!!")
        fun()
    return wrapper

@topping
def pizza():
    print("This is the base of the pizza")

pizza()

# OUTPUT:
# This is the topping at the very top!!
# This is the base of the pizza
```
- Here `topping` is the decorator function that takes a function as an argument. 
- It contains definition for a `wrapper` function that contains the main code that the decorator function needs to perform. It is requried in almost all the decorator function because if not then the code will be executed right when the decorator is called.
- The decorator is placed using `@` followed by the name of the decorator function right before the function that need to be "decorated".
- When this "decorated" function is called instead of it's code being executed directly it is passed to the decorator function as an argument and then the return value from that is executed in place of the "decorated" function.
- An image of it will be like:
```python
pizza()

# instead is executed like:

pizza  = topping(pizza)
```
- Such that the return value of `topping` function replaces and get executed in place of the `pizza` function.
---


# Instance and Static methods
- ***Instance Methods***: These are the methods that are used with instances. They take `self` as an argument.
- ***Static Methods***: These are the methods that do not use class data i.e. these are not the methods attached to an instance of a class but to the class itself. 
    - They are defined in a class but do not take `self` as an argument.
    - The `@staticmethod` decorator must be used to create a static method.
```python
class animal:
    def __inti__(self, name, alive):
        self.name = name
        self.alive = alive
    
    def nameIt(self):
        print(f"My name is {self.name}")
    @staticmethod    
    def about():
        print(f"This is animal class")

dog = animal("Dawg", True)
dog.nameIt()
animal.about()
```
- Here the `nameIt` method can only be called by the instances of the class `animal` and is thus an ***Instance Method***.
- Where as the `about` method can only be called by the class itself and not it's instances and is thus a ***Static Method***.
---


# Class methods
- Class methods are the methods that work on the class itself. 
- Just like how instance methods take `self` as an argument referring to the instance of that class itself, class methods take `cls` as argument referring to the class itself.
```python
class Student:
    total = 0
    def __inti__(self, name):
        self.name = name
        # Adds 1 to `total` varaible every time a new instance is created.
        total += 1 
    
    @classmethod
    def totalIs(cls):
        print(f"Total number of students = {cls.total}")

st1 = Student("Ben")
st2 = Student("Jane")
st3 = Student("Eepy")

Student.totalIs() # Total number of students = 3
```
- `@classmethod` decorator must be used to create the class methods.
---


# Magic Methods
- Magic Methods or Dunder (Double Underscore) methods are the methods that are called when python's built-in operator (i.e. +, -, \*, in etc.) are used with an object.
- They allow developers to customize the behavior of an object.
- Some of these methods are:
    - `__inti__`: This method is called when an object is created and defines what should happen when it is being created.
    - `__str__`: This method is called when we try to print out an object. If this function is not defined, the memory location of that object is printed out.
    - `__add__`: This method is called when the addition operator (`+`) is called. It takes `self` for the object it self and an argument for the other object this object is being added to.
    - `__sub__`: This method is same as `__add__` but for subtraction.
    - `__gt__` or `__lt__`: These are the methods for greater than `>` and lesser than `<` operators and are same as `__add__` otherwise.
    - `__contains__`: This method is same `__add__` but for `in` operator.
    - `__getitem__`: This method is same as `__add__` but for indexing operation i.e. `object[index]` where index can be a number or a keyword.
---

# Property Decorator 
- `@property` decorators allow to define methods as properties (attributes).
- It has three different types of these properties:
    - `getter()`: for when a method is called to get it's value like getting the value of an attribute. Like:
    ```python
    class Rectangle:

        def __inti__(self, width, height)
            self._width = width
            self._height = height

        @property
        def width(self):
            return self._width

        @property
        def height(self):
            return self._height
    
    rec = Rectangle(12,10)
    print(rec.width) # instead of rec._width
    print(rec.height) # instead of rec._height
    ```
    Here, the methods `width` and `height` will be called like attribute to the instance. (The attributes defined with `_` are supposed to be only accessed inside the class itself.)
    - `setter()`: for when an object's attribute is to have it's value set. Like:
    ```python
    @width.setter
    def width(self, new_width):
        if new_width > 0:
            self._width = new_width
        else:
            print("The width should be more than zero")

    @height.setter
    def height(self, new_height):
        if new_height > 0:
            self._height = new_height
        else:
            print("The height must be greater than zero")

    rec = Rectangle(21, 10)
    Rectangle.width = 0 # The width must be greater than zero
    Rectangle.height = 0 # The height must be greater than zero
    ```
    Here, `new_width` and `new_height` refer to the values of width and height were being set to respectively. The decorators `@<attr>.setter` is used where `<attr>` is the respective attributes the method is being defined for.
    - `deleter()`: for when an object is to be deleted. Like:
    ```python
    @width.deleter
    def width(self):
        del self._width
        print("The width has been deleted")
    
    @height.deleter
    def height(self):
        del self._height:
        print("The height has been deleted")

    rec = Rectangle(20, 12)

    del rec.width # The width has been deleted
    del rec.height # The height has been deleted
    ```
---


# Exception Handeling

