#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <cmath>  // For M_PI and 'pow()'

/**
 * @brief Derived class representing a circle.
 * 
 * This class inherits from Shape and implements specific functionalities
 * to calculate the area and the permieter (circunference) of a circle.
 */
class Circle : public Shape {
    private:
     double radius;
    
    public:
     /**
      * @brief Constructor for the Circle class.
      * @param r Radius of the circle.
      */
     Circle(double r) : Shape("Circle"), radius(r) {}

     /**
      * @brief Calculates the area of the circle.
      * @return The area as a double.
      */
     double area() const override {
        return M_PI * pow(radius, 2);
     }

};

#endif