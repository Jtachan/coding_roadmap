# Exercise 8: Exceptions

## Objective
Understand exceptions, how to raise them and handle them with try-except blocks.

## Task

Modify the code from exercise 7 to get a correct input from the user before running the program.

- Add a function `get_correct_user_input` which will call the `input()` function.
- Use a `try-except` block to catch any incorrect type-casted input.
- Raise an exception if the value is not a valid limit (lower than 2).
- Keep asking for a correct input until the user enters a valid limit.

# Python Theory

## Exceptions

An "exception" is an error that has been raised during the runtime of the program.
Exception does not mean immediately that the program has a bug, but that something went wrong.

In the previous exercises it might have happened that some invalid entry was given; then the program raised an exception as the following (taking exercise 7 as an example):
```
Traceback (most recent call last):
  File "coding-learning-exercises\Python\07. Functions\prime_numbers.py", line 16, in <module>
    limit = int(input("Up to which number do you want to find prime numbers? "))
ValueError: invalid literal for int() with base 10: 'Five'
```

What happened here is that the user defined a number as `"Five"` instead of `5`.
Thanks to the output of the Traceback, this can be easily identified (as long as someone has experience reading them).
Here is a dissection line by line of the error:

`File "coding-learning-exercises\Python\07. Functions\prime_numbers.py", line 16, in <module>`<br>
At this line, the file where the error occurred is specified, as well as the exact line number where the program failed.

`limit = int(input("Up to which number do you want to find prime numbers? "))`<br>
This is the exact line where the error occurred. We can read that the line tries to type-cast the input of the user (a string) to an integer.

`ValueError: invalid literal for int() with base 10: 'Five'`<br>
Finally, the error message is displayed.
At the far right we see the user input "Five" which could be considered a correct number.
However, python does not support a direct conversion from a string to an integer in this case.

There is documentation over [all the concrete exceptions](https://docs.python.org/3/library/exceptions.html#concrete-exceptions) (error classes) that Python supports natively.

## Handling exceptions

### Raising exceptions

All quality code should contain exceptions. Why? Because they provide crucial information about and unwanted, unsupported or unknown behavior.
Whenever there is a need for it, an exception should be **raised** with a clear message of what happened.

Imagine you want to code a calculator.
One very used feature of any calculator is the division of two (or more) numbers.
However, there is one single case that does not work in a division: dividing a number over zero.
The theoretical mathematical answer is infinity, but this is not a simple task to show with numbers in python.
Instead, we can raise an error:

```python
def division(a: float, b: float) -> float:
    """Performing the division of 'a' over 'b'.
    
    Raises
    ------
    ZeroDivisionError:
        Case where it was tried to divide a number over 0.
    """
    if b == 0:
        raise ZeroDivisionError("Not possible to divide over 0")
    return a / b
```

The `ZeroDivisionError` is already an exception handled internally by the Python interpreter.
In our previous code we just modified the message it prints.

**Raising an error** stops the program to avoid further problems.
However, there are cases where we want to catch these errors to do something different.
For example, we don't want our function to raise the error but to update the result to display the infinity symbol `'∞'`. 

```python
from typing import Union

def division(a: float, b: float) -> Union[float, str]:
    """Performing the division of 'a' over 'b'."""
    try:
        result = a / b
    except ZeroDivisionError:
        result = "∞"
    return result
```

### Try-Except blocks

Using a `try-except` block allow us handling exceptions to cases we don't want out program to fail.

There might be other times that, just like before, we want to override the error message or type.
In these cases it can be better to **re-raise it** from the original error.
As a result, our terminal will display the complete log of all the errors.

```python
from typing import Union

def division(a: float, b: float) -> Union[float, str]:
    """Performing the division of 'a' over 'b'."""
    try:
        result = a / b
    except ZeroDivisionError as err:
        raise ValueError("The provided divisor is 0") from err
    return result
```

### Try-Except-Finally blocks

The `try-except-finally` block is an expansion of the `try-except` block.
The difference is that the `finally` block is always executed.
The main goal of these blocks usually is not to raise new exceptions, but to clean up resources no matter what happened.
This is common while working with files (next chapter's topic.)

````python
file = open("file.txt", "r")
try:
    data = file.read()
except Exception as err:
    print(f"There was some error: {err}")
finally:
    file.close()
````
