#include <iostream>
using namespace std;

//// Function prototype
//void displayMessage();
//void displayMessage2();

void displayMessage2()
{
	cout << "Hello from the displayMessage2 function.\n";
}

void displayMessage()
{
	cout << "Hello from the displayMessage function.\n";
	displayMessage2();
}

int main()
{
	cout << "Hello from main.\n";
	// Call a function - Display a message
	displayMessage();

	cout << "Now we are back in the main function again.\n";

	return 0;
}

