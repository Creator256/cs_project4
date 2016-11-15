#include "Cube.h"

Cube::Cube(double s, double x, double y, double z) : ThreeDimensionalShape(x, y, z), sideLength(s) {}

double Cube::getArea() const {
	return static_cast<double>(6 * pow(sideLength, 2));
}

double Cube::getVolume() const {
	return pow(sideLength, 3);
}

double Cube::getSideLength() const {
	return sideLength;
}

void Cube::print(ostream &out) const {
	out << "Cube with sidelength of: " << getSideLength() << " and centered at: (" << getCenterX() << " , " << getCenterY() << " , " << zCenter << ")." << std::endl;
	out << "Area: " << getArea() << ". Volume: " << getVolume() << "." << std::endl;
}