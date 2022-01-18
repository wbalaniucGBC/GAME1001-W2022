// This application will calculate the area of a circle. (PI * R^2)
#include <iostream>
#include <cmath>	// Mathematics library containing math functions
using namespace std;

int main()
{
	double area, radius;

	cout << "This program calculates the area of a circle.\n";
	cout << "==============================================\n";

	// Get the radius
	cout << "What is the radius of the circle? ";
	cin >> radius;

	// Compute and display the area
	area = 3.14159 * pow(radius, 2);
	cout << "The area is " << area << endl;

	return 0;
}