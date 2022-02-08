#include <iostream>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];		// Hold hours worked for 6 employees

	// Input the hours worked by each employee
	cout << "Enter the hours work by " << NUM_EMPLOYEES << " employees: ";

	cin >> hours[0];
	cin >> hours[1];
	cin >> hours[2];
	cin >> hours[3];
	cin >> hours[4];
	cin >> hours[5];

	// Display the contents to the user
	cout << "The hours you entered are: ";
	cout << " " << hours[0];
	cout << " " << hours[1];
	cout << " " << hours[2];
	cout << " " << hours[3];
	cout << " " << hours[4];
	cout << " " << hours[5];

	return 0;
}