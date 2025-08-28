#include "Rectangle.h"

Rectangle::Rectangle(double w, double h)
    : Shape("Rectangle"), width(w), height(h) {}

double Rectangle::area() const { return width * height; }

double Rectangle::perimeter() const { return 2 * (width + height); }
