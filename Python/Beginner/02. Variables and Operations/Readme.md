# Exercise 2: Basic Arithmetic Operations
## Objective
Learn how to perform basic arithmetic operations and work with different data types.

## Task
Create a program that converts Fahrenheit to Celsius.
The user must provide the Fahrenheit temperature.
  
## Expected Result

```commandline
Enter a temperature in Fahrenheit: 77.72
The temperature in Celsius is: 25.4
```

# Python theory

## Variables

Just like in other languages, can store data in variables (defined with a type and a value).
In this module, we will see all non-array variables, which are:

- `int`: Positive and negative integers.
- `float`: Positive and negative floating point numbers.
- `str`: Strings of characters.
- `bool`: Boolean values (`True` or `False`).
- `None`: "Nonetype" variable, commonly used to specify something is "empty".

There are two main differences with variables in Python and in other languages:

### 1. Declaration

While in other languages it is required to declare variables before using them, a variable in Python can be declared at the same time it is used.

Python example:
```python
number_a = 2
number_b = 3

result = number_a + number_b
```

C++ example (for comparison):
```c++
int result;
int number_a = 2;
int number_b = 3;

result = number_a + number_b;
```

### 2. Mutability (Dynamic typing)

As you also noted at the previous examples, it is not required to declare the type of variables before using them.
This is because Python is a **dynamically typed language**, which means that each variable can mutate to any other type based on the operations performed over it.

Python also supports finding the type of variable using the `type()` function.
See the example below about mutability:

```pycon
>>> var = 2
>>> type(var)
<class 'int'>
>>> var /= 4
>>> print(var)
0.5
>>> type(var)
<class 'float'>
>>> var = "Hello"
>>> type(var)
<class 'str'>
```

> Note: A variable cannot be type-casted into `None`, only assigned as `var = None`.

## Operations

Python supports all the basic arithmetic operations:

```python
print(2 + 3)  # prints 5
print(2 - 3)  # prints -1
print(2 * 3)  # prints 6
print(2 / 3)  # prints 0.6666666666666666
```

There are also some special operators supported in python without the need of other modules:

- `a ** b` (Exponent): Performs the operation 'a' to the power of 'b'.
- `a % b` (Modulo): Returns the remainder from the division of 'a' over 'b'.
- `a // b` (Floor division): Returns the integer part of the division of 'a' by 'b'.

```python
print(2 ** 3)  # prints 8
print(2 % 3)  # prints 2 (2 is not divisible by 3)
print(2 // 3)  # prints 0 (2 / 3 = 0.66 -> integer part = 0)
```

Some operators also can be used on strings:

- `a + b` (Concatenation): Concatenates the strings 'a' and 'b'.
- `a * n` (Repetition): Repeats the string 'a' n-times.

```python
print("Hello" + " " + "world")  # prints 'Hello world'
print("Hi " * 3)  # prints 'Hi Hi Hi'
```

But it is important to use the correct operations with the correct data types.
For example, it is not possible to add a string and a number:

```pycon
>>> 2 + "3"
TypeError: unsupported operand type(s) for +: 'int' and 'str'
```

To fix these issues, make sure to **type cast** the variables before performing the operation.
To do so, use the `str()`, `int()` or `float()` functions.

````pycon
>>> 2 + float("3")
5.0
````

### Inline operations

Many of these operators can also be user right before a `=` sign to update a value.
For example, both following operations return the same result:

```python
var = 2
var = var + 2
print(var)  # prints 4

var = 2
var += 2
print(var)  # prints 4
```
