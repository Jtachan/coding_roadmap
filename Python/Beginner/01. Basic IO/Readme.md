# Exercise 1: Terminal Input and Output

## Objective
Learn about asking data from the users and how to use f-strings.

## Task
Write a simple program where:
- The program ask the user for their name and age.
- Outputs a message saying: "Hello, [Name]! You are [Age] years old."

## Theory

### Variables

Just like in other languages, many python codes keep some data in variables to work with them later.
A variable is defined by its type and its value, however it is not required to define each variable before start working with them.
In other words, a variable can be directly assigned to its value.

```python
name = "Alice"  # Type str (string)
name = 'Alice'  # String can be defined as "..." or '...'
age = 23  # Type int (integer)
height = 1.62  # Type float
```

Python is a language with dynamic typing, meaning that a variable could change its type.

```pycon
>>> var = 5
>>> print(var)
5
>>> type(var)
<class 'int'>

>>> var = var / 2
>>> print(var)
2.5
>>> type(var)
<class 'float'>
```

It is also possible to do **type casting** (converting a variable into a different type).
To do so, and considering only the three previous types, just write `int()`, `float()` or `str()` encapsulating the variable you want.

```pycon
>>> var = 5
>>> print(var)
5
>>> print(float(var))
5.0
>>> var = str(var)
>>> print(var)
5
>>> type(var)
<class 'str'>
```

> Warning: Not all variables can be type cast directly, as it depends on their value.
> For example, the string "1.23" could be type cast into a 'float'. 
> If it is cast into 'int', the final value would be just '1'.
> However, if the string "Alice" is cast into 'int' or 'float', Python will raise an error as the conversion was not possible.

### User input

Python contains some built-in functions which can be used without the need of importing other modules.
One of these is the [`input()`](https://docs.python.org/3/library/functions.html#input) function.

The `input()` function works through the terminal and allows printing a message and reading a string from the user input.

```pycon
>>> var = input("How old are you?\n")
How old are you?
23  # Here the user typed '23' then pressed Enter
>>> type(var)
<class 'str'>
```

### Formatting data into strings

As seen previously, variables can be easily printed into the terminal using `print()`.
However, there might be cases where you want to format all data together into a single string for several reasons:
- You avoid multiple `print()` statements.
- The final call is simpler.
- The code looks cleaner and is more readable.

In python this is possible by using _f-strings_.
Within these strings, you can define variables among the brackets `{}` for them to be automatically converted into strings.

```python
name = "Alice"
height = 1.62

print(f"Hi! My name is {name} and I am {height} cm tall.")
# Hi! My name is Alice and I am 1.62 cm tall.
```
