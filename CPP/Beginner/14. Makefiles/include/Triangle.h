#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
   private:
    double a, b, c;

   public:
    Triangle(double side1, double side2, double side3);
    double area() const override;
    double perimeter() const override;
};

#endif