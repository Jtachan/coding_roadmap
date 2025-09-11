# Exercise 12: Enums and DataClasses

## Objective
Understand the importance of the modules `enum` and `dataclass`.

## Task

Create a home task organizer. For that, follow these steps:

1. Create a new module `home_task.py` containing:
    - A dataclass `HomeTask` with the attributes 'title', 'priority' and 'done'.
    - An enumeration `TaskPriority` with the values 'LOW', 'MEDIUM' and 'HIGH'.
2. Create a new module `organizer.py` with:
    - A function that takes a list of `HomeTask` and organizes them by priority.
    - A function that prints as a table a list of `HomeTask`. Use the module `tabulate` for it.
3. A scrip `main.py` that:
    - Allows the user to input new tasks.
    - Once all unfinished tasks are input, prints a table of all the tasks sorted by priority.
    - Provides then a routine to the user of "next task to do" and marks the task as 'done' when the user says it is done.

# Python theory

## Dataclasses

Dataclasses are python classes that the main goal is to contain (public) data at its attributes.
Just like other classes, they can have properties, methods, etc.

The module `dataclasses` is the built-in module to work with dataclasses.

````python
from dataclasses import dataclass

@dataclass
class Person:
    name: str
    age: int

    def say_hello(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

friend = Person(name="Alice", age=23)
friend.say_hello()
````

As you can see, a dataclass does not contain the constructor `__init__`, it is automatically generated.
However, it is possible to define a `__post_init__` method, which will run right immediately after the initialization.

````python
from dataclasses import dataclass

@dataclass
class Person:
    name: str
    age: int

    def __post_init__(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

# This will print the message immediately after the initialization
friend = Person(name="Alice", age=23)
````

## Enums

The module `enum` allows to create enumerations.
An enumeration is a collection of named constants, which can also contain a defined value.
When the value is not as important, usually the function `auto()` is used.

```python
import enum

class Color(enum.Enum):
    RED = enum.auto()
    GREEN = enum.auto()
    BLUE = enum.auto()

my_color = Color.RED
```

One of the main targets to use enumeration is to compare the object itself.
In exercise 3, some comparative operators were explained.
For example, the operator `==` compares two variables have the same value.

When comparing enumerations, the operator `is` is used, which compares the object itself.

```python
if my_color is Color.RED:
    print("It is red!")
elif my_color is Color.GREEN:
    print("It is green!")
else:
    print("It is blue!")
```

The attributes of an enumeration are `name` (the uppercase name provided) and `value` (their own value).

```python
import enum

class RGBColor(enum.Enum):
    RED = (255, 0, 0)
    GREEN = (0, 255, 0)
    BLUE = (0, 0, 255)
    BLACK = (0, 0, 0)
    WHITE = (255, 255, 255)
    YELLOW = (255, 255, 0)


my_color = RGBColor.YELLOW
print(my_color)  # RGBColor.YELLOW
print(my_color.name)  # YELLOW
print(my_color.value)  # (255, 255, 0)
```

### Other enum types

The `enum.Enum` is the basic enumeration type, but there exist other types which are more oriented to their value:

- [`enum.IntEnum`](https://docs.python.org/3/library/enum.html#enum.IntEnum): The enumeration values are integers.
- [`enum.StrEnum`](https://docs.python.org/3/library/enum.html#enum.StrEnum): The enumeration values are strings.
- [`enum.Flag`](https://docs.python.org/3/library/enum.html#enum.Flag): The enumeration values are bitwise flags.
