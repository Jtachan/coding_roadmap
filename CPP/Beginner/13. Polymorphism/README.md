# Exercise 13: Implementing Polymorphism with Shapes

## Objective
Create a base class called Shape and derive two classes from it: Circle and Rectangle. Implement a virtual function area() in the base class and override it in the derived classes to calculate the area of each shape.
You can reuse the classes from the last exercise.

## Task
- Base Class (Shape): 
  - Should have a pure virtual function double area() const.
  - Include a virtual destructor which defined from which shape it was called.
- Derived Class (Circle):
  - Constructor should take the radius as a parameter.
  - Implement the area() function to calculate the area of a circle.
  - Include a destructor.
- Derived Class (Rectangle):
  - Constructor should take the width and height as parameters.
  - Implement the area() function to calculate the area of a rectangle.
  - Do not include a destructor.
- Main Function:
  - Create a list of pointers to Shape objects.
  - Add different shapes (Circle, Rectangle) to the list.
  - Iterate through the list and display the area of each shape using polymorphism.

## Expected result
The program should display the calculated areas for each shape in the list.

This exercise will help you understand how to use polymorphism to handle objects of different derived types through a common base class interface. Let me know if you need guidance at any point!

# C++ theory