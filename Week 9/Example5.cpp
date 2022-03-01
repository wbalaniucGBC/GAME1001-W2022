#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototype
void displayMenu();
int getChoice();
void showFees(string category, double rate, int months);

int main()
{
	// Constants
	const double ADULT_RATE = 120.0,
				 CHILD_RATE = 60.0,
				SENIOR_RATE = 100.0;

	int choice, months;

	// Set our formatting.
	cout << fixed << showpoint << setprecision(2);

	do
	{
		displayMenu();				//  Display the menu
		choice = getChoice();		// Assign the choice value return from the getChoice function

		if (choice != 4)
		{
			cout << "For how many months? ";
			cin >> months;

			switch (choice)
			{
				case 1:	
					showFees("Adult", ADULT_RATE, months);
					break;
				case 2: 
					showFees("Child", CHILD_RATE, months);
					break;
				case 3: 
					showFees("Senior", SENIOR_RATE, months);
					break;
			}
		}

	} while (choice != 4);

	cout << "Thank you for signing up!";

	return 0;
}

void displayMenu()
{
	system("cls");
	cout << "\n   Health Club Membership Menu\n";
	cout << "================================\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
}

int getChoice()
{
	int choice;

	cin >> choice;
	while (choice < 1 || choice > 4)
	{
		cout << "The only valid choices are 1-4. Please re-enter. ";
		cin >> choice;
	}

	return choice;
}

void showFees(string memberType, double rate, int months)
{
	cout << endl
		<< "Membership Type : "  << memberType << "     "
		<< "Number of months: "  << months << endl
		<< "Total charges   : $" << (rate * months) << endl;

	// Hold the screen until the user presses the ENTER key.
	cout << "\nPress the enter key to return to the menu. ";
	cin.get();	// Clear the previous \n out of the input buffer
	cin.get();	// Wait for the user to press Enter
}
