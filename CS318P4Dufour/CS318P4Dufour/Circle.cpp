#include "Circle.h"
#include "MathConstants.h"

// default constructor with parameters: radius, x, y
Circle::Circle(double r, double x, double y) : TwoDimensionalShape(x, y), radius(r) {}

double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {
	return radius*radius*MATH_CONSTANTS::PI;
}

void Circle::print() const {
	std::cout << "Circle with radius " << radius << "; center at (" << getCenterX() <<
		", " << getCenterY() << ")" << std::endl << "Area: " << getArea() << std::endl;
}