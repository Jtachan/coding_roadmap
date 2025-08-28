#include "Circle.h"

#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle(double r) : Shape("Circle"), radius(r) {}

double Circle::area() const { return M_PI * radius * radius; }

double Circle::perimeter() const { return 2 * M_PI * radius; }
