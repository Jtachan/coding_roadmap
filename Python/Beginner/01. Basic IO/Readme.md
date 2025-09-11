# Exercise 1: Terminal Input and Output

## Objective
Learn about asking for data from the users and how to use f-strings.

## Task
Write a simple program where:
- The program asks the user for their name and age.
- Outputs a message saying: "Hello, [Name]! You are [Age] years old."

# Theory

## User input

Python contains some built-in functions that can be used without the need to import other modules.
One of these is the [`input()`](https://docs.python.org/3/library/functions.html#input) function.

The `input()` function works through the terminal and allows printing a message and reading a string from the user input.

```pycon
>>> var = input("How old are you?\n")
How old are you?
23  # Here the user typed '23' then pressed Enter
>>> type(var)
<class 'str'>
```

## Formatting data into strings

Variables can be easily printed into the terminal using `print()`.
However, there might be cases where you want to format all data together into a single string for several reasons:
- You avoid multiple `print()` statements.
- The final call is simpler.
- The code looks cleaner and is more readable.

In python this is possible by using _f-strings_.
Within these strings, you can define variables among the brackets `{}` for them to be automatically converted into strings.

```python
name = "Alice"
height = 1.62

print(f"Hi! My name is {name}, and I am {height} cm tall.")
# Hi! My name is Alice, and I am 1.62 cm tall.
```
