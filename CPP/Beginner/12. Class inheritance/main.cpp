#include <iostream>

#include "Circle.h"
#include "Rectangle.h"

int main() {
    // Creating a rectangle of width 4 and height 5
    Rectangle rect(4, 5);
    rect.printName();
    std::cout << "Area: " << rect.area() << '\n'
              << "Perimeter: " << rect.perimeter() << '\n'
              << std::endl;

    // Create a circle of radius 3
    Circle circ(3);
    circ.printName();
    std::cout << "Area: " << circ.area() << '\n'
              << "Perimeter: " << circ.perimeter() << '\n'
              << std::endl;

    return 0;
}
