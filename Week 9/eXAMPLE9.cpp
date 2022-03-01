#include <iostream>
using namespace std;

// Function prototype
void doubleNum(int&);
void doubleNum(double&);

int main()
{
	double value = 4;

	cout << "In main, value is " << value << endl;
	cout << "Now calling doubleNum..." << endl;
	doubleNum(value);
	cout << "Now back in main, value is " << value << endl;

	return 0;
}

void doubleNum(int& var)
{
	var *= 2;
}

void doubleNum(double& var)
{
	var *= 3;
}
