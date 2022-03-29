// Comparing two strings to each other
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// Two array for holding two strings
	const int LENGTH = 40;
	char firstString[LENGTH], secondString[LENGTH];

	// Read two string in
	cout << "Enter a string: ";
	cin.getline(firstString, LENGTH);
	cout << "Enter a second string: ";
	cin.getline(secondString, LENGTH);

	// Check alphabetical order
	cout << "Here are your strings sorted alphabetically:\n";
	if (strcmp(firstString, secondString) < 0)
	{
		cout << firstString << endl << secondString << endl;
	}
	else if (strcmp(firstString, secondString) > 0)
	{
		cout << secondString << endl << firstString << endl;
	}
	else
	{
		cout << "You entered the same string twice!\n";
	}

	return 0;
}