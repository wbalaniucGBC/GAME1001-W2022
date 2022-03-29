#include <iostream>
using namespace std;

int main()
{
	const int NAME_LENGTH = 50;
	char* pname = nullptr;

	// Dynamicall allocated array
	pname = new char[NAME_LENGTH];	// Delete this

	// Read a string
	cout << "Enter your name: ";
	cin.getline(pname, NAME_LENGTH);

	// Display the string
	cout << "Hello " << pname;

	delete[] pname;

	return 0;
}