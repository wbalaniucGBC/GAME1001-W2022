#include <iostream>
using namespace std;

// Function prototype
void getNumber(int*);
void doubleValue(int*);

int main()
{
	int number;

	// Call getNumber and pass the address of number
	getNumber(&number);

	// Call doubleValue and pass the address of number
	doubleValue(&number);

	cout << "That value doubled is " << number << endl;

	return 0;
}

void getNumber(int* input)
{
	cout << "Enter an integer number: ";
	cin >> *input;
}

void doubleValue(int* val)
{
	*val *= 2;
}