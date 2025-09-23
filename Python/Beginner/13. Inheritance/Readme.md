# Exercise 13: Inheritance and Polymorphism

## Objective
Understand how to create child classes and what is the polymorphism.

## Task
Create the following modules:

- `shape.py`: Containing only the class `Shape`, that provides:
  - Attributes 'name' (str) and 'nof_sides' (int).
  - The abstract method `calculate_area()`.
  - The method `print_info()`, which prints the number of sides.
- `circle.py`: Containing the class `Circle`, that inherits from `Shape` and provides:
  - Initialization with the radius or the diameter (both accessible by the user).
- `rectangle.py`: Containing the class `Rectangle`, that inherits from `Shape` and provides:
  - Initialization with the width and the height.
  - If only one is provided (or both are equal), the name should be 'square' and not rectangle.

Test your code with a module `main.py`.

# Python theory

## Inheritance

As python is an OOP, one of its strongest features is the inheritance.
In other words, it is possible to create a parent class (defining the structure, methods and/or attributes) and create a child class that inherits from it.

At the previous exercise 12, we already used inheritance with the enumerations.
A class inherits from another when the parent class is mentioned when the child class is defined.

```python
from dataclasses import dataclass

@dataclass
class Person:
    """Class representing a person.
    
    This is the same example class from exercise 12.
    """
    name: str
    age: int

    def say_hello(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

@dataclass
class Student(Person):
    """Class representing a student."""
    grade: int


student_a = Student(name="Nick", age=17, grade=7)
student_a.say_hello()
```

> Note: Even though in the example the dataclasses are used for the inheritance, any new class can inherit from another one (without the need of using dataclasses.)

## Polymorphism

Polymorphism is the ability to use the same method name for different objects.
In other words, the same method is overwritten by the child class (for whatever reason).

To do this, the child class must define the same method as in the parent class.

```python
from dataclasses import dataclass

@dataclass
class Person:
    """Class representing a person.
    
    This is the same example class from exercise 12.
    """
    name: str
    age: int

    def say_hello(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

@dataclass
class Student(Person):
    """Class representing a student."""
    grade: int
    
    def say_hello(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.\nMy final grade is {self.grade}.")


student_a = Student(name="Nick", age=17, grade=7)
student_a.say_hello()
```

Sometimes, not everything is to be overridden by the child class.
In these cases, the parent class can be invoked by using the `super()` function.

```python
from dataclasses import dataclass

@dataclass
class Person:
    """Class representing a person.
    
    This is the same example class from exercise 12.
    """
    name: str
    age: int

    def say_hello(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

@dataclass
class Student(Person):
    """Class representing a student."""
    grade: int
    
    def say_hello(self):
        super().say_hello()
        print(f"My final grade is {self.grade}.")


student_a = Student(name="Nick", age=17, grade=7)
student_a.say_hello()
```

Both last examples have the same print when the `Student.say_hello()` method is called.

## Abstract classes

Some parent classes might define methods that are not yet implemented, as they need to be implemented in the child classes.
A possible solution for this would be to raise a `NotImplementedError` when the method is defined at the parent class.

```python
class Shape:
    def calculate_area(self):
        raise NotImplementedError(
            "This logic must be implemented in the child class, as different shapes have different equations to calculate the area."
        )

class Square(Shape):
    side: float
    
    def calculate_area(self) -> float:
        return self.side ** 2
```

While this approach works, it can be seen as not the cleaner one.
For this reason, python allows **abstract classes**, that are classes that have empty methods to be filled when the class is inherited.

`````python
from abc import abstractmethod, ABC


class Shape(ABC):
    """Abstract class representing any shape.
    
    The class must inherit from 'ABC' (Abstract Base Class) to define abstract methods.
    """

    @abstractmethod
    def calculate_area(self):
        """Abstract method to calculate the area of the shape."""
`````

With this new `Shape` class, when the `Square` inherits from it all abstract methods are required to be implemented.
Not doing so will raise an error when the program is executed.