# Exercise 12: Inheritance in C++

## Objective
Create a program that models a simple hierarchy of classes using inheritance. You will create a base class Shape and derive two classes Rectangle and Circle from it. Each derived class will implement functions to calculate the area and perimeter of the shapes.

## Task

- Base Class Shape: Define a base class named Shape containing
    - A protected attribute name to hold the name of the shape.
    - A public method printName() that prints the shape's name.
    - Two pure virtual functions:
        - double area() to calculate the area of the shape.
        - double perimeter() to calculate the perimeter of the shape.

- Derived Class Rectangle:
    - Inherit from Shape and represent a rectangle.
    - Add private attributes width and height.
    - Implement the area() and perimeter() functions.

- Derived Class Circle:
    - Inherit from Shape and represent a circle.
    - Add a private attribute radius.
    - Implement the area() and perimeter() functions.

- Main Function:
    - Create instances of Rectangle and Circle.
    - Set their dimensions.
    - Print their names, areas, and perimeters.

## Hints

- Use the keyword virtual in the base class to define pure virtual functions, making Shape an abstract class.
- Use the override keyword in the derived classes when implementing the inherited virtual functions.
- For the Rectangle, the area is calculated as width * height, and the perimeter is 2 * (width + height).
- For the Circle, the area is π * radius * radius, and the perimeter (circumference) is 2 * π * radius. 
- Use the constant M_PI from <cmath> for π.

## Expected Result
When you run your program, it should print something like:

```commandline
Shape: Rectangle
Area: 20
Perimeter: 18

Shape: Circle
Area: 28.2743
Perimeter: 18.8496
```

# C++ theory
