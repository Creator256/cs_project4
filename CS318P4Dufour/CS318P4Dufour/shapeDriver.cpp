// Driver to test Shape hierarchy
#include <iostream>
using namespace std;
#include <vector>
using std::vector;
#include <typeinfo>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cube.h"
int main() 
{
	const int NUMBER_OF_SHAPES = 10;
	// create vector shapes
	vector < Shape * > shapes(NUMBER_OF_SHAPES);
	// initialize vector with Shapes
	shapes[0] = new Circle(3.5, 6, 9);
	shapes[1] = new Square(12, 2, 2);
	shapes[2] = new Sphere(5, 1.5, 4.5);
	shapes[3] = new Cube(2.2);
	shapes[4] = new Triangle(0.0, 0.0, 0.0, 3.0, 4.0, 0.0);
	shapes[5] = new Rectangle(3.0, 4.0, 3.0, 4.0);
	shapes[6] = new Triangle(2.0, 3.0, 1.0, 3.0, 0.0, 0.0);
	shapes[7] = new Triangle(7.0, 0.0, 10.0, 10.0, -2.0, -4.0);
	shapes[8] = new Triangle(0.0, 0.0, 0.0, 1.0, 1.0, 0.0);
	shapes[9] = new Triangle(4.0, 4.0, 4.0, 4.0, 4.0, 4.0);
	// output Shape objects and display area and volume as appropriate
		for (int i = 0; i < NUMBER_OF_SHAPES; i++)
		{
			cout << *(shapes[i]) << endl;
			// downcast pointer
			TwoDimensionalShape *twoDimensionalShapePtr = dynamic_cast<TwoDimensionalShape*>(shapes[i]);
			// fix with downcasting
			// if Shape is a TwoDimensionalShape, display its area
			if (twoDimensionalShapePtr != nullptr)
				cout << "Area: "<< twoDimensionalShapePtr->getArea() << endl;
			// downcast pointer
			ThreeDimensionalShape *threeDimensionalShapePtr = dynamic_cast<ThreeDimensionalShape*>(shapes[i]);
			// fix with downcasting
			// if Shape is a ThreeDimensionalShape, display its area and volume
			if (threeDimensionalShapePtr != nullptr)
				cout <<"Area: "<< threeDimensionalShapePtr->getArea()<<"\nVolume: " << threeDimensionalShapePtr->getVolume()<< endl;
			cout << endl;
		}
	// end for
	return
		0;
}
// end main