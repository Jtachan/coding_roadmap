# Exercise 11: OOP and Classes

## Objective
Understand the OOP concepts and how to organize the code into classes.

## Task
Create a class `BankAccount` with the following attributes:

- account_holder: Name of the person who owns the account
- account_number: Unique account identifier
- balance: Current balance of the account. If not specified, this should be set directly to 0.

The class should have the following methods:

- deposit: Adding money to the account
- withdraw: Subtracting money from the account
- print_balance: Getting the current balance of the account

Additionally, the class should have the following property:

- info: Information about the account holder and number.

Make sure the class raises the correct exceptions when the situation requires it.

# Python theory

## Objects

Python is an object-oriented programming language.
In other words, "everything" in python is an object containing attributes (data/properties) and methods (functions related to the object).

For example, at exercise 02 we learned about the type `str` (string).
A string is an object that contains:

- data: the characters that make up the string.
- methods: functions related to the string. For example, `lower()` returns a copy of the string with all the characters in lowercase.

This behavior is common along all variables and many callables in python.

## Classes

A class is a blueprint for creating new objects, where we can structure the data and all the code related to the same classification.
Classes have a few rules for their construction:

- New classes are created using the keyword `class`.
- The PEP 8 convention also states to use CamelCase for class names.
- The constructor of the class is defined as a method called `__init__`.
- The constructor receives the arguments that are passed to the class.

```python
class MyCircle:
    """Class to represent a circle and perform calculations."""
    def __init__(self, radius: float):
        self.radius = radius

circle = MyCircle(radius=10)
```

### Attributes

All attributes are defined as `self.attribute_name`.
It is recommended to always define all the required attributes in the constructor (to avoid errors).

There are different types of attributes:

- `self.public`: It is an attribute that can be accessed (and modified) from outside the class.
- `self._protected`: Attribute to be accessed from inside the class. It should not be accessed from the outside, but it is possible to do so.
- `self.__private`: Attribute to be accessed only from inside the class.

### Methods

Each **function** of a class is called a **method**.
Methods allow performing operations over the class' attributes.
The first parameter of each method is always `self` (keyword that refers to the class instance).

```python
from math import pi

class MyCircle:
    """Class to represent a circle and perform calculations."""
    def __init__(self, radius: float):
        self.radius = radius

    def calculate_area(self) -> float:
        """Calculate the area of the circle."""
        return pi * self.radius ** 2

circle = MyCircle(radius=5)
print(circle.calculate_area())  # Prints 78.53981633974483
```

It is also possible to define multiple constructors (with different input parameters) using the `@classmethod` decorator.
Class-methods have as the first parameter `cls` instead of `self`, and they return an instance of the class using the original constructor.

```python
from __future__ import annotations
from math import pi

class MyCircle:
    """Class to represent a circle and perform calculations."""
    def __init__(self, radius: float):
        self.radius = radius

    @classmethod
    def from_diameter(cls, diameter: float) -> MyCircle:
        """Create a circle from a diameter."""
        return cls(diameter / 2)
    
    def calculate_area(self) -> float:
        """Calculate the area of the circle."""
        return pi * self.radius ** 2

circle = MyCircle.from_diameter(diameter=10)
print(circle.calculate_area())  # Prints 78.53981633974483
```

### Properties

A **property** is a special kind of method that returns data just like a public attribute.
When it is called, the property is called without the `()` that methods and functions have.
Properties do not allow parameters.

```python
class MyCircle:
    """Class to represent a circle and perform calculations."""
    def __init__(self, radius: float):
        self.radius = radius
        
    @property
    def diameter(self) -> float:
        """Return the diameter of the circle."""
        return self.radius * 2

circle = MyCircle(radius=5)
print(circle.diameter)  # Prints 10
```
