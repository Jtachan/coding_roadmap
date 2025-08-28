# Exercise 2: Basic Arithmetic Operations
## Objective
Learn how to perform basic arithmetic operations and work with different data types.

## Task
Write a program that:

- Asks the user to input two integers.
- Performs the following operations on those integers:
    - Addition
    - Subtraction
    - Multiplication
    - Division
- Outputs the result of each operation in a readable format.
  
## Expected Result
If the user inputs 10 and 5 as the two integers, the program should output:

```commandline
Addition: 10 + 5 = 15
Subtraction: 10 - 5 = 5
Multiplication: 10 * 5 = 50
Division: 10 / 5 = 2
```

# C++ Theory

## Types of variables

When defining a variable, the type of this one must be specified before its name. 
Then, the variable must be initialized (its value must be set to a known value) before it is used.

```cpp
#include <string>

int number;  // integer variable, not initialized.
std::string dayOfTheWeek = "Monday";  // string variable, initialized
```

Some of the **basic types** for variables are:

- `int`: Defines signed integers.
- `unsigned int`: Defines unsigned integers.
- `float`: A single-precision floating-point number (usually 32 bits).
- `double`: A double-precision floating-point number (usually 64 bits).
- `char`: A character type, usually 8 bits, which can represent ASCII values.
- `bool`: Represents a boolean, either 'true' or 'false'.
- `void`: Represents the absence of type.

From C++11 and onwards, there are **fixed-width integer types** using the library `<cstdint>`:

- `int8_t, int16_t, int32_t, int64_t`: Signed integers of fixed width (8, 16, 32, and 64 bits).
- `uint8_t, uint16_t, uint32_t, uint64_t`: Unsigned integers of fixed width.

There exist also **standard types**, importing the correct library.
For example `std::string` can be defined when including `<string>`.

## Operations with variables

The **basic operations** that can be perfomed in C++ are:

- Sum (`+`): `int a = 1 + 2;`. As a result, `a = 3`.
- Substraction (`-`): `int a = 1 - 2;`. As a result, `a = -1`.
- Multiplication (`*`): `int a = 1 * 2;`. As a result, `a = 2`.
- Division (`/`): `float a = 1 / 2;`. As a result, `a = 0.5`.
- Modulus/Reminder (`%`): `int a = 1 % 2`. As a result, `a = 1` (reminder of the division 1 / 2).

These operation can be directly assigned over variables.

- `int a += 2;` is equivalent to `int a = a + 2;` 
- `int a -= 2;` is equivalent to `int a = a - 2;` 
- `int a *= 2;` is equivalent to `int a = a * 2;` 
- `float a /= 2;` is equivalent to `int a = a / 2;` 
- `int a %= 2;` is equivalent to `int a = a % 2;` 

When defining these operations with numbers, each number also has a type.
If a type is not define, these are the **literal types**:

- In `a + 2`, the number '2' is a literal integer (type `int`).
- In `a / 2.0`, the number '2.0' is a literal decimal point (type `double`).

It is of good practise to always define the type of the values you work with:

- `2u` defines that '2' is type `unsigned`.
- `2.0f` defines that '2' is type `float`.
