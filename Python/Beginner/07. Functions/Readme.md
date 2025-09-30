# Exercise 7: Functions and Type Hints

## Objective
Understand how to create and document functions.

## Task

Create a function to find all the prime numbers up to a given number (included in the test).
The user must provide this limit.

Follow this strategy for the logic of the function:

- A number is prime if it is not divisible among all numbers from 2 to an upper threshold.
- The upper threshold of a number N is `ceil(square_root(N)) + 1`.
- You will need to use `math.sqrt` to define the square root of a number.
- The function should test only a single number and return a boolean.

Once you have the function, the main code should call the function in runtime.

````
Up to which number do you want to find prime numbers? 5
These are the numbers:
[2, 3, 5]

Up to which number do you want to find prime numbers? 24
These are the numbers:
[1, 2, 3, 5, 7, 11, 13, 17, 19, 23]
````

# Python Theory

## Functions

A function is a block of code that only runs when it is called.
In python, functions are defined with the keyword `def`.

```python
def is_even(number):
    return number % 2 == 0
```

A function can execute code and call other functions.
When a function calls itself, it is called a _recursive function_.

```python
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)
```

When aiming for a clean code, it is not only good practice to use descriptive function names but also to document them using [docstrings](https://peps.python.org/pep-0257/#what-is-a-docstring).
Docstrings are defined among triple quotes right immediately after the function definition.

```python
def is_even(number):
    """Check whether a number is even (divisible by 2)."""
    return number % 2 == 0
```

## Type Hints

Just like docstrings, _type hints_ are commonly used to document the types of the used arguments, as well as the return value type.
While they have no effect on the code, they are useful to spot possible bugs and to understand which data is to be parsed into the function.

Type hints are defined using the `:` operator for input parameters and the `->` operator for the return value.

```python
def is_even(number: float) -> bool:
    """Check whether a number is even (divisible by 2)."""
    return number % 2 == 0
```

Sometimes, the built-in types are not enough to describe the expected input.
In this case, it is possible to use the [`typing` module](https://docs.python.org/3/library/typing.html#typing-support-for-type-hints) to define more types.

## Default values

When defining a function, it is possible to define default values for its arguments.
Any default value is the value that the argument takes when the user does not provide it.

```python
def greet(name: str, greeting: str = "Hello"):
    print(f"{greeting}, {name}!")

greet("Alice")  # Hello, Alice!
greet(greeting="Hi", name="Bob")  # Hi, Bob!
```

Any default value must be defined after all arguments that require a value.
As shown in the example, it is also possible to call the parameters by name in any order.
