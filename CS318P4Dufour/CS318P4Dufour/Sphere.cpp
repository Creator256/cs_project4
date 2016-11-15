#include "Sphere.h"
#include "MathConstants.h"

Sphere::Sphere(double r, double x, double y, double z) : ThreeDimensionalShape(x, y, z), radius(r) {}

double Sphere::getArea() const {
	return static_cast<double>(4 * pow(radius,2) * MATH_CONSTANTS::PI);
}

double Sphere::getVolume() const {
	return static_cast<double>((4 / 3)*MATH_CONSTANTS::PI*pow(radius, 3));
}

double Sphere::getRadius() const {
	return radius;
}

void Sphere::print(ostream &out) const {
	out << "Circle with radius " << getRadius() << ", centered at (" << getCenterX() << " , " << getCenterY() << " , " << zCenter << ")." << std::endl;
	out << "Area: " << getArea() << ". Volume: " << getVolume() << "." << std::endl;

}