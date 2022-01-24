// Switch statements
#include <iostream>
using namespace std;

int main()
{
	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;

	// Switch statement
	switch (choice)
	{
		case 'A': 
		case 'a':
			cout << "You entered A.\n";
			break;
		case 'B':
		case 'b':
			cout << "You entered B.\n";
			break;
		case 'C': 
		case 'c':
			cout << "You entered C.\n";
			break;
		default: 
			cout << "You did not enter A, B, or C!\n";
	}


	return 0;
}