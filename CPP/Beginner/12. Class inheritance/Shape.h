#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

/**
 * @brief Class representing a generic shape.
 *
 * This class serves as a base class for other shapes.
 * It contains the protected name attribute and pure virtual functions
 * for calculating the area and perimeter, making this class abstract.
 */
class Shape {
   protected:
    std::string name;

   public:
    /**
     * @brief Construct a shape with a given name.
     * @param shapeName The name of the shape.
     */
    Shape(const std::string& shapeName) : name(shapeName) {}

    /**
     * @brief Prints the main name.
     */
    void printName() const { std::cout << "Shape: " << name << std::endl; }

    /**
     * @brief Calculates the area of the shape.
     * Pure virtual fucntion to be implemented by derived classes.
     * @return double The area of the shape.
     */
    virtual double area() const = 0;

    /**
     * @brief Perimeter of the shape.
     * Pure virtual function to be implemented by derived classes.
     * @return double The perimeter of the shape.
     */
    virtual double perimeter() const = 0;
};

#endif