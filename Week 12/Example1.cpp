#include <iostream>
using namespace std;

int main()
{
	int x = 25, y = 50, z = 75;	// int variable
	int* ptr = nullptr;	// Pointer variable that points to int's.

	cout << "Here are the values of x, y, and z:\n";
	cout << x << " " << y << " " << z << endl;

	ptr = &x;
	*ptr *= 2;

	ptr = &y;
	*ptr *= 3;

	ptr = &z;
	*ptr *= 5;

	cout << endl << endl;
	cout << "Here are the values of x, y, and z:\n";
	cout << x << " " << y << " " << z << endl;

	ptr = nullptr;

	return 0;
}