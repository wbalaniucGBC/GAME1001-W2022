#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
	double radius;
public:
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