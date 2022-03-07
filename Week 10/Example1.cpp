#include <iostream>
#include <cmath>
using namespace std;

// Circle class declaration
class Circle
{
private:	// Private access specifier. Data hiding of variables
	double radius;
		
public:		// Public access specifier. Member functions
	void setRadius(double r)
	{
		radius = r;
	}
	double getRadius()
	{
		return radius;
	}
	double calcArea()
	{
		return 3.14 * pow(radius, 2);
	}
};

int main()
{
	// Define 2 Circle objects
	Circle circle1, circle2;

	circle1.setRadius(1);
	circle2.setRadius(2.5);

	cout << "The area of circle1 is " << circle1.calcArea() << endl;
	cout << "The area of circle2 is " << circle2.calcArea() << endl;

	return 0;
}