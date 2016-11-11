#include "Rectangle.h"

// default constructor with parameters: length, width, x, y
Rectangle::Rectangle(double l, double w, double x, double y) : TwoDimensionalShape(x, y),
	length(l), width(w) {}

double Rectangle::getLength() const {
	return length;
}

double Rectangle::getWidth() const {
	return width;
}

double Rectangle::getArea() const {
	return width*length;
}

void Rectangle::print(ostream &out) const {
	out << "Rectangle with length " << getLength() << " and width " << getWidth() <<
		"; center at (" << getCenterX() << ", " << getCenterY() << ")" << std::endl
		<< "Area: " << getArea() << std::endl;
}