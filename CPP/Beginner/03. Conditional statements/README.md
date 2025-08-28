# Exercise 3: Grading System
## Objective

Understanding of if-else statements by creating a program that uses multiple conditions.

## Task

Write a program that:

- Asks the user to input a percentage grade (0-100).
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

# C++ theory

## If-else conditions

An if-block defines a set of code which gets executed only a certain condition is met:

```cpp
if (condition) {
  // Code to be executed when 'condition' is true.
} 
```

Additionaly, an else-block can be added after the if-block.
This contains code to execute when the previous condition was not met:

```cpp
if (condition) {
  // Code to be executed when 'condition' is true.
} else {
  // Code to be executed when 'condition' is false.
}
```

These blocks can be placed sequentially, definining different blocks of code for different conditions:

```cpp
if (condition_a) {
  // Code to be executed when 'condition_a' is true.
} else if (!condition_b) {
  // Code to be executed when 'condition_b' is false.
} else {
  // Code to be executed when 'condition_a' is false and 'condition_b' is true.
}
```

The operand `!` negates the result:

- `!true` is equivalent to `false`.
- `!false` is equivalent to `true`.