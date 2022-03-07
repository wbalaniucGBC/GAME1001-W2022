#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
	double radius;
public:
	// Constructors are used to initialize values
	Circle(double r = 1.0);	// Constructor with 1 parameter with a default value
	~Circle()				// Destructor.
	{
		cout << "Destroying circle with radius " << radius << endl;
	}
	void setRadius(double);
	double getRadius()	// Inline
	{
		return radius;
	}
	double calcArea()	// Inline
	{
		return 3.14 * pow(radius, 2);
	}
};