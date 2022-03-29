#include "Circle.h"

Circle::Circle(double r = 1.0)
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

void Circle::setRadius(double r)
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