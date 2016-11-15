#include "Triangle.h"

Triangle::Triangle(double a1, double b1, double a2, double b2, double a3, double b3) : TwoDimensionalShape(xCenter, yCenter) {
	x1 = a1;
	y1 = b1;
	x2 = a2;
	y2 = b2;
	x3 = a3;
	y3 = b3;
	                                                         // When drawing a picture...
	side1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)); // p1 to p2; side "c"
	side2 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3)); // p2 to p3; side "a"
	side3 = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1)); // p3 to p1; side "b"
	//So side1 = c, side2 = a, and side3 = b
	xCenter = ((side2*x1) + (side3*x2) + (side1*x3)) / (side1 + side2 + side3);
	yCenter = ((side2*y1) + (side3*y2) + (side1*y3)) / (side1 + side2 + side3);
	/*xCenter = ((side1*x1) + (side2*x2) + (side3*x3)) / (side1 + side2 + side3);
	yCenter = ((side1*y1) + (side2*y2) + (side3*y3)) / (side1 + side2 + side3); */
}

double Triangle::getSide1Length() const {
	return side1;
}

double Triangle::getSide2Length() const {
	return side2;
}

double Triangle::getSide3Length() const {
	return side3;
}

double Triangle::getArea() const {
	double halfPerim = (side1 + side2 + side3) / 2.0;
	return sqrt(halfPerim*((halfPerim - side1)*(halfPerim - side2)*(halfPerim - side3)));
}

void Triangle::print(ostream &out) const {
	out << "Triangle with points at (" << x1 << " , " << y1 << ")";
	out << ", (" << x2 << " , " << y2 << ")";
	out << ",and (" << x3 << " , " << y3 << "). ";
	out << "It is centered at (" << getCenterX() << " , " << getCenterY() << ")." << std::endl;

	out << "Side A's length is: " << side1;
	out << ". Side B's length is: " << side2;
	out << ". Side C's length is: " << side3 << std::endl;

	out << "It has an area of: " << getArea() << std::endl;
}