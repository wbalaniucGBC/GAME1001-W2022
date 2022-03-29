// Use a function to "cut" off the last name of a string
#include <iostream>
using namespace std;

void nameSlice(char[]);	// Function prototype

int main()
{
	const int NAME_LENGTH = 41;
	char name[NAME_LENGTH];

	cout << "Enter your first and last names, separated by a space: \n";
	cin.getline(name, NAME_LENGTH);

	// Slice off the last name and print what is left
	nameSlice(name);
	cout << "Your first name is: " << name << endl;

	return 0;
}

void nameSlice(char userName[])
{
	// Look for the end of the first name, indicated by a space ro a null terminator
	int k = 0;
	while (userName[k] != ' ' && userName[k] != '\0')
	{
		k++;
	}

	// At the end or we are at the space
	if (userName[k] == ' ')
	{
		userName[k] = '\0';	// This we generally avoid.
	}
}