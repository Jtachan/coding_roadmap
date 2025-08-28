# Exercise 1: Basic Input and Output

## Objective
Learn how to take user input and display it using `std::cin` and `std::cout`.

## Task
Write a program that:
- Asks the user to input their name.
- Asks the user to input their age.
- Outputs a message saying: "Hello, [Name]! You are [Age] years old."

## Expected Result
If the user inputs "Alice" as their name and "30" as their age, the program should output:
```commandline
Hello, Alice! You are 30 years old.
```

# C++ theory
## Using the console

To use the terminal in C++ it is necessary to include the `iostream` library.

```cpp
#include <iostream>
```

This library allows to use `std::cin` (console input) and `std::cout` (console output).
The symbols `<<` are used for printing through the console output, and `>>` to obtain data through the console input.

```cpp
int number;

std::cout << "Write a number: ";
std::cin >> number;
std::cout << "You wrote the number " << number << std::endl;
```

The manipulator `std::endl` writes the special character `\n` (new line) and flushes the buffer. 
In other words, the output is inmediately shown on the terminal.

Writing `std::endl` and `\n` are different, as `\n` does not flush the buffer and it is faster.
Try to use `std::endl` only when the output is to be shown immediately or the code is done using the console.
