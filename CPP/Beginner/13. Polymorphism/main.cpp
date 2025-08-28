#include <vector>

#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"

int main() {
    // Create a vector of shapes:
    std::vector<Shape*> shapes;

    // Add different shapes:
    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(2, 4));
    shapes.push_back(new Circle(2.5));

    // Iterate over the shapes, print the area and clean up
    // the allocated memory:
    for (const Shape* shape : shapes) {
        std::cout << "*******\n";
        shape->printName();
        std::cout << shape->area() << "\n";
        delete shape;  // Calls the destructor
    }
    std::cout << std::endl;

    return 0;
}