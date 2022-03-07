#include "Circle.h"

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