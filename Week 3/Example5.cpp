// Working with string
#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	string name;
	string city;

	// cin unable to read long string containing blanks.
	cout << "Please enter your name: ";
	// cin >> name;							
	getline(cin, name);
	cout << "Enter the city you live in: ";
	// cin >> city;
	getline(cin, city);

	cout << "Hello, " << name << endl;
	cout << "You live in  " << city << endl;
	*/

	string firstName, lastName, fullName;
	string stars;
	int numStars;

	cout << "Please enter your first name: ";
	getline(cin, firstName);

	cout << "Please enter your last name: ";
	getline(cin, lastName);

	// String concatenation ("Combining two strings")
	fullName = firstName + " " + lastName;

	numStars = fullName.length();	// Return number of characters including blanks
	stars.assign(numStars, '-');

	cout << endl;
	cout << stars << endl;
	cout << fullName << endl;
	cout << stars << endl;

	return 0;
}