// Menu-driven application
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constrant for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice;		// Menu choice
	int months;		// Number of months
	double charges;	// Monthly charges

	// Display the menu and get the user's choice.
	cout << "   Health Club Membership Menu\n";
	cout << "================================\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	// Validate and process the menu choice
	if (choice >= 1 && choice <= 3)
	{
		// Valid choice
		cout << "For how many months? ";
		cin >> months;

		// Set the charges based on user input
		switch (choice)
		{
			case 1:
				charges = months * ADULT_RATE;
				break;
			case 2:
				charges = months * CHILD_RATE;
				break;
			case 3:
				charges = months * SENIOR_RATE;
				break;
		}

		// Display the charge
		cout << fixed << showpoint << setprecision(2);
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{
		cout << "The valid choices are 1 through 4.\n";
		cout << "Run the program again and select one of these.\n";
	}

	/*

	// Format our output
	cout << fixed << showpoint << setprecision(2); // <-- Format for money! 

	// Use the menu selection to execute the correct set of actions
	if (choice == 1)
	{
		// Adult membership
		cout << "For how many months? ";
		cin >> months;
		charges = months * ADULT_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice == 2)
	{
		// Child membership
		cout << "For how many months? ";
		cin >> months;
		charges = months * CHILD_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice == 3)
	{
		// Senior citizen
		cout << "For how many months? ";
		cin >> months;
		charges = months * SENIOR_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice == 4)
	{
		// Quit the program
		cout << "\nThe valid choices are 1 through 4.\n"
			<< "Run the program again and select one of those.\n";
	}
	*/

	return 0;
}