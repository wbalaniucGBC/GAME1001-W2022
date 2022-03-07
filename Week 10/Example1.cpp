#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	// Define 2 Circle objects
	Circle circle1;
	Circle circle2(3.5);

	// circle1.setRadius(1);
	// circle2.setRadius(2.5);

	cout << "The area of circle1 is " << circle1.calcArea() << endl;
	cout << "The area of circle2 is " << circle2.calcArea() << endl;

	return 0;
}