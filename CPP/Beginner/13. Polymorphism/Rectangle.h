#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

/**
 * @brief Derived class representing a rectangle.
 *
 * This class inherits from Shape and implements specific functionality
 * to calculate the area and perimeter of a rectangle.
 */
class Rectangle : public Shape {
   private:
    double width;
    double height;

   public:
    /**
     * @brief constructor for a Rectangle object
     * @param w The width of the rectangle.
     * @param h The height of the rectangle.
     */
    Rectangle(double w, double h) : Shape("Rectangle"), width(w), height(h) {}
    ~Rectangle() {
        std::cout << "Derived class 'Rectangle' destructor called." << std::endl;
    }

    /**
     * @brief Calculates the area of the rectangle.
     * @return The area as a double.
     */
    double area() const override { return width * height; }
};

#endif