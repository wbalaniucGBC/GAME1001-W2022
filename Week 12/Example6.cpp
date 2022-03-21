#include "Squares.h"
#include <iostream>
using namespace std;

int main()
{
	// Allocate square object
	Squares* sqPtr = new Squares(10);	// Declares a pointer. Dynamically allocates new memory.

	cout << "The list of squares is: ";
	sqPtr->print();

	delete sqPtr;
	sqPtr = nullptr;

	return 0;
}