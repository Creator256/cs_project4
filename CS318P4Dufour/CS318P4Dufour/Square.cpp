#include "Square.h"

// default constructor with parameters: side, x, y
Square::Square(double side, double x, double y) : Rectangle(side, side, x, y), sideLength(side) {}

double Square::getSideLength() const {
	return sideLength;
}

double Square::getArea() const {
	return sideLength*sideLength;
}

void Square::print(ostream &out) const {
	out << "Square with side length " << getSideLength() << "; center at (" << getCenterX() << ", "
		<< getCenterY() << ")" << std::endl;
}