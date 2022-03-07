#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;
public:
	void setLength(double);	// Regular function
	void setWidth(double);	// Regular function
	double getLength()		// Inline
	{
		return length;
	}
	double getWidth()		// Inline
	{
		return width;
	}
	double calcArea()		// Inline
	{
		return length * width;
	}
};

