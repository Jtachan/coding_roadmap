# Exercise 14: Makefiles

## Objective

Understanding the importance of multiple .cpp with .h files and how Makefiles help.

## Task

- Create a Makefile for the project.
- Define a base class `Shape` (only header file).
- Define the following derived classes from `Shape`:
    - `Circle`
    - `Rectangle`
    - `Triangle`
- Each class must have a header file (with only declarations) and a .cpp file (with all the code).
- Each derived class must be able to calculate the area and perimeter.

Create a file `main.cpp` which performs the following operations:
- Create one instance of each derived class.
- Create a vector of pointers to store each created instance.
- Iterate over all shapes printing the area.
- Clear the vector once finished with it.

# C++ theory