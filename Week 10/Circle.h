#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
	double radius;
public:
	// Circle();	// Default constructor -- No parameters
	// Circle(double r); // Overloaded constructor

	// Constructor
	Circle(double r = 1.0)
	{
		if (r > 0)
		{
			radius = r;
		}
		else
		{
			cout << "Value must be greater than 0. Defaulting to 1";
			radius = 1.0;
		}
	}




	~Circle()				// Destructor.
	{
		cout << "Destroying circle with radius " << radius << endl;
	}
	void setRadius(double r)
	{
		if (r > 0)
		{
			radius = r;
		}
		else
		{
			cout << "ERROR! Value must be greater than 0. Defaulting to 1. \n";
			radius = 1;
		}
	}
	double getRadius()	// Inline
	{
		return radius;
	}
	double calcArea()	// Inline
	{
		return 3.14 * pow(radius, 2);
	}
};