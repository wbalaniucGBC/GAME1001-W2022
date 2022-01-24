// Lack of precisions in floating-point numbers and comparisons
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double result = 0.666667 * 6.0;	// 2/3 of 6.0 should be 4

	cout << fixed << showpoint << setprecision(10);
	cout << "result = " << result << endl;

	// However, internally result is not precisely equal to 4.
	// Test if result is "close enough" to 4
	if (abs(result - 4.0 < 0.0001))
	{
		cout << "Result DOES equal 4!" << endl;
	}
	else
	{
		cout << "Result DOES NOT equal 4!" << endl;
	}

	return 0;
}