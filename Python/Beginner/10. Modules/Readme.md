# Exercise 10: Packages and modules

## Objective
Understand how to work with python modules and external packages.

## Task

Create a module to work with matrices 3x3.
The module should have the following functions:


- Create a random 3x3 matrix. The matrix created must be type `list`.
- Add two matrices. Use `numpy` to do so.

To work with matrices, install the `numpy` package.
Remember to previously **create a virtual environment** (as specified in [exercise 0](../00.%20Getting%20started/Readme.md#installing--setting-python)) and then to install the package with the command `pip install numpy`.

At last, run the script `main.py` to test your module.

# Python Theory

## External packages

In previous exercises we have already imported some packages, like `math`, `typing` or `json`.
However, all these packages are python built-ins (they are integrated with our installed python version).

Not every package is already preinstalled in python, but [`PyPI`](https://pypi.org/) is the main python package indexing that allows to install new packages.
Anything released there can be installed as `pip install PACKAGE_NAME`.
These usually are open source packages with their own GitHub repository and documentation.
Each package might also need different requirements, for example [`matplotlib`](https://pypi.org/project/matplotlib/) requires of [`numpy`](https://numpy.org/).

Once installed, they can be imported with their full path or even an alias:

```python
import numpy as np
```

### requirements.txt

At bigger non-installable projects it is common to have a `requirements.txt` file that lists all the packages that are required to run the project.
This file can be used to install all the packages with the command `pip install -r requirements.txt`.
Here each package can also be defined with specific versions as:

- `NAME == X.Y.Z`: Exactly the version specified.
- `NAME >= X.Y.Z`: At least the version specified.
- `NAME <= X.Y.Z`: At most the version specified.
- `NAME ~= X.Y.Z`: The version specified, but with the same major and minor version.
- `NAME`: Any version, the latest one by default when the package is not yet installed.

## Modules

As commented also at exercise 0, the python files are called modules.
That is because everything can be imported without any further installation.

Let's take the example that we have written the following module:

```python
# my_functions.py
import math


def is_even(n: float) -> bool:
    """Checking if a number is even."""
    return n % 2 == 0


def is_prime(number: int | float) -> bool:
    """Checking if a positive number is prime."""
    threshold = int(math.sqrt(number)) + 1
    for num in range(2, threshold):
        if number % num == 0:
            return False
    return True


if __name__ == "__main__":
    print("This is the testing area for my module.")
    # Prime numbers
    print("Testing 'is_prime()' at number 11. Expected 'True', got: ", is_prime(11))
    print("Testing 'is_prime()' at number 25. Expected 'False', got: ", is_prime(25))
    # Odd / Even numbers
    print("Testing 'is_even()' at number 25. Expected 'False', got: ", is_even(25))
    print("Testing 'is_even()' at number 32. Expected 'True', got: ", is_even(32))
```

At this point, it should be clear what happens if the file is invoked as `python my_functions.py`.
However, in this case we also have another module named `main.py` at the same folder:

```python
# main.py

import json
from my_functions import is_even, is_prime

TESTING_FILE_PATH = "path_to_file.json"


if __name__ == "__main__":
    print("Checking all numbers within the file:")
    with open(TESTING_FILE_PATH, "r", encoding="utf-8") as file:
        all_numbers: list[int] = json.load(file)

    for number in all_numbers:
        print(
            f"Number {number} {'is' if is_prime(number) else 'is not'} prime"
            f" and {'is' if is_even(number) else 'is not'} even."
        )
```

At our module `main.py` we are importing the functions directly from our `my_functions.py` module.

The importance of the block `if __name__ == "__main__"` is now seen when python invokes the file as `python main.py`.
At this case, the console will print all that is defined within `main.py`, but will completely skip any code that is within the `if __name__ == "__main__"` block at the module `my_functions.py`.
In other words, this block contains code that will only run when the file is invoked, and not when it is imported.

### Why should you separate your code in different modules?

It may happen that at this example of less than 50 lines does not make much sense to separate the code in different modules.
However, in bigger projects, a single file might contain a code of more than 300 lines (which is usually a normal-size file).

Separating your code in different modules (even if the module has only one object) will help you to have a cleaner code, and it will be easier to debug when errors appear.

For example, considering a project of a calculator that has visual UI elements.
The next files could easily be all part of the project:
```
src/
|-> basic_operations.py
|-> binary_operations.py
|-> scientific_operations.py
|-> main_ui_window.py
|-> mode_selection.py
```

Consider now that each file has 300 - 500 lines of code.
Having all together in a single file might be a nightmare that no coder wants to live.

A well-structured project into different modules can increase the readability of the code and will help you code faster.
