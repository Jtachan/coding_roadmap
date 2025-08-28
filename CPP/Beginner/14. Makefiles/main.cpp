#include <iostream>
#include <vector>

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
    // Defining the vector of pointers to the shapes:
    std::vector<Shape*> shapes;

    // Adding three different shapes to the vector:
    shapes.push_back(new Rectangle(2, 3));
    shapes.push_back(new Circle(4));
    shapes.push_back(new Triangle(2, 2, 2));

    // Printing the shape parameters and recovering memory:
    for (Shape* shape : shapes) {
        std::cout << "\n*********\nShape: " << shape->getName()
                  << "\nArea: " << shape->area()
                  << "\nPerimeter: " << shape->perimeter() << '\n';

        delete shape;
    }
    std::cout << std::endl;

    // Checking if the array is empty:
    std::string result;
    if (shapes.empty()) {
        result = "Yes";
    } else {
        result = "No";
    }
    std::cout << "Is array empty after deleting the shapes individually?: "
              << result << std::endl;

    // Cleaning the array and checking again:
    shapes.clear();
    if (shapes.empty()) {
        result = "Yes";
    } else {
        result = "No";
    }
    std::cout << "Is array empty after using 'clear()'?: " << result << '\n'
              << std::endl;

    return 0;
}
