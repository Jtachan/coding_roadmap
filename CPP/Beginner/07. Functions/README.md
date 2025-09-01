# Exercise 7: Functions
## Objective
Learn how to define, declare, and use functions in C++.

## Task

- Create a documented header (`.h`) file containing all the functions.
- Define a function named `square()` that takes an integer parameter and returns its square.
- Define a function named `greet()` that prints a simple greeting message to the console.
- Use both functions in the `main()` function to demonstrate how they work.

## Expected Result

- The `square()` function should calculate and return the square of a number.
- The `greet()` function should print a greeting message.
- The `main()` function should use these functions and display results to the console

# C++ theory

## Functions

Functions are a self-contained block of code that performs a specific task.
They allow coders to break down complex problems into smaller manageable task, improving also its readability and reuse.

Each function is composed by:

- The **return type**, which is `void` when it does not return anything.
- The **parameters**, each one with its specified type.

```cpp
int add(int a, int b) {
    return a + b;
}
```

## Header files

Header files contain code declarations, in other words, they don't contain actual code implementations.
A header file is defined in C++ with the `.h` or `.hpp` extension.

Each header file should be linked to its `.cpp` file, which contains the code:

```cpp
// math_operations.h
int add(int a, int b);
int subtract(int a, int b);
```

```cpp
// math_operations.cpp
#include "math_operations.h"

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
```

### Safe include
C++ is also sensitive to multi-importing the same file. 
For that, it is crucial to define an import flag within the header file:

```cpp
// math_operations.h

#ifndef MATH_OP_H
    #define MATH_OP_H

    int add(int a, int b);
    int subtract(int a, int b);
#endif
```

With this routine, `math_operations.h` can be included in multiple `.cpp` files safely.

### Code documentation

Another benefit of spliting the code in header files is documenting the code only at the implementation.
Like so, the declarations and documentation of the functions are separated from their code, leading to easier to understand code in projects with large code.


```cpp
// math_operations.h

#ifndef MATH_OP_H
    #define MATH_OP_H

    /*
     * @brief Addition of two integers.
     *
     * @param a - The first integer to add.
     * @param b - The second integer to add.
     * @return int - The result of the addition. 
     */
    int add(int a, int b);
#endif
```

```cpp
// math_operations.cpp
#include "math_operations.h"

int add(int a, int b) { return a + b; }
```

The block comments to document each function follow a set of rules:

- They are defined with the keys `/* */`.
- Use of `@brief` to define a brief description of the function (no longer than one line). If a longer description/explanation is required, this can be written in the following lane, before the parameters.
- Use of `@param p_name` to define an input parameter. This can be omitted if the function takes no parameters.
- Use of `@return type` to define the returned value. This can be omitter if the function is `void` (does not return any value).

## Code compilation

Previously, when at C++ we worked with a single `main.cpp` file, the compilation was quite direct:

```commandline
g++ main.cpp
```

This command would generate an `a.exe` file.
However, when we define new header files, this also needs to be parsed so the main program can compile correctly:

```commandline
g++ main.cpp math_operations.cpp
```

As you can see, the difference is not very big. 
The number of files to parse will grow the more header files we create, but worry not as there is also a solution (explained at the exercise #14) to keep this simple.
