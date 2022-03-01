#include <iostream>
using namespace std;

// Function prototype
void changeMe(int);

int main()
{
	int number = 12;

	// Display the value in number
	cout << "In main number is " << number << endl;

	// Call changeMe.
	changeMe(number);

	// Display the value in number
	cout << "In main number is " << number << endl;

	return 0;
}

void changeMe(int myValue)
{
	// Change the value of myValue to 0;
	myValue = 0;

	// Display the value in myValue
	cout << "In changeMe, the value has been changed to " << myValue << endl;
}