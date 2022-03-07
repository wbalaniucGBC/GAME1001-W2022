#include "Rectangle.h"

void Rectangle::setLength(double len)
{
	if (len >= 0.0)
	{
		length = len;
	}
	else
	{
		length = 1.0;
		cout << "Invalid length. Using a default value of 1.0\n";
	}
}

void Rectangle::setWidth(double wid)
{
	if (wid >= 0.0)
	{
		width = wid;
	}
	else
	{
		width = 1.0;
		cout << "Invalid width. Using a default value of 1.0\n";
	}
}