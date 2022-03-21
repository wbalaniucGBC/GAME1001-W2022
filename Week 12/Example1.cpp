#include <iostream>
using namespace std;

int main()
{
	int x = 25;	// int variable
	int* ptr;	// Pointer variable that points to int's.

	ptr = &x;

	cout << "The value in x is " << x << endl;
	cout << "The value in x again is " << *ptr << endl;

	*ptr = 100;

	cout << "The value in x again is " << *ptr << endl;
	cout << "The value in x is " << x << endl;

	return 0;
}