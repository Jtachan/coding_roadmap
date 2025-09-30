# Exercise 3: Grading System
## Objective

Understanding of if-else statements by creating a program that uses multiple conditions.

## Task

Write a program that:

- Asks the user to input a percentage grade (0 - 100).
- Determines the corresponding letter grade based on the following criteria:
  - A: 90 - 100
  - B: 80 - 89
  - C: 70 - 79
  - D: 60 - 69
  - F: 0 - 59
- Outputs the corresponding letter grade.
  
## Expected Result
If the user inputs 85, the program should output:
```commandline
Your grade is B
```

If the user inputs 72, the program should output:
```commandline
Your grade is C
```

# Python theory

As in other languages, the `if-else` statements run code only if the conditions are met.
The difference is that python does not use brackets `{}` to contain blocks of code.
Instead, the code is structured with indents (tabulations) or spaces (the PEP rules specify to use 4 spaces).

```python
if condition:
    code_to_execute()
```

All conditions are type `bool` (the value is either `True` or `False`).
Some basic mathematical operators for comparison are:

- `a == b`: Whether 'a' has the same value as 'b'.
- `a != b`: Whether 'a' has a different value as 'b'.
- `a < b`: Whether 'a' has a value lower than 'b'.
- `a > b`: Whether 'a' has a value greater than 'b'.
- `a <= b` / `a >= b`: Whether 'a' has a value equal or lower (`<=`) or equal or higher (`>=`) than 'b'.

```python
if num % 2 == 0:
    print("The number is even!")
else:
    print("The number is odd!")
```

Whenever you want to make a chain of conditions, you should use the keywords `if-elif-else`.
At these statements, the first condition is checked. If it fails, then the following is checked. Only when all conditions are checked, the `else` runs.

```python
if num % 2 == 0:  
    print("The number is divisible by 2")
elif num % 3 == 0:
    print("The number is not divisible by 2, but is divisible by 3")
else:
    print("The number is not divisible by 2 nor 3")
```

## Special boolean cases

If we want to save the condition if the number is even, that would be with the following code:
```python
num_is_even = num % 2 == 0
```

However, it is also possible to type-cast variables into booleans.
```pycon
>>> bool(0)
False
>>> bool(1)
True
```

This casting is automatically performed when using any `if-elif` statement.
Thus, it is important to code with caution whenever the code `if var:` is used.

As a general rule, `bool(var)` will always be `False` for:

- Value 0 as integer `0` or float `0.0`
- Empty strings `""` or `''`
- Empty array-like object, like `[]` (we will see about these objects in a further topic)
- The `None` type

Any other boolean-casting will result in `True`.
```pycon
>>> bool(23)
True
>>> bool(-74.5)
True
>>> bool("apples")
True
```
