#include "Square.h"

// default constructor with parameters: side, x, y
Square::Square(double side, double x, double y) : Rectangle(side, side, x, y) {}

double Square::getSideLength() const {
	return sideLength;
}

double Square::getArea() const {
	return sideLength*sideLength;
}

void Square::print() const {
	std::cout << "Square with side length " << getSideLength() << "; center at (" << getCenterX() << ", "
		<< getCenterY() << ")" << std::endl << "Area: " << getArea() << std::endl;
}