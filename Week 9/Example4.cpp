#include <iostream>
#include <cstdlib>
using namespace std;

// Function prototype
double divide(double arg1, double arg2);

//int main()
//{
//	double num1, num2;
//
//	cout << "Enter two numbers: ";
//	cin >> num1 >> num2;
//
//	cout << "The quotient is " << divide(num1, num2) << endl;
//
//	return 0;
//}

double divide(double arg1, double arg2)
{
	// Input validation
	if (arg2 == 0.0)
	{
		cout << "Sorry, I cannot divide by zero. Exiting program. \n";
		exit(0);
	}

	return (arg1 / arg2);
}