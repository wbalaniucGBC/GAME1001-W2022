// Work with the months of the year. Holds number of days in each month.
// Parallel arrays

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const int NUM_MONTHS = 12;
	string name[NUM_MONTHS+1] = { " ", "January", "February", "March", "April",
								"May", "June", "July", "August",
								"September", "October", "November", "December"};

	int days[NUM_MONTHS+1] = {0, 31, 28, 31, 30,
							31, 30, 31, 31,
							30, 31, 30, 31 };

	for (int i = 1; i <= NUM_MONTHS; i++)
	{
		cout << setw(9) << left << name[i] << " has " << days[i] << " days.\n";
	}

	/*
	int days[NUM_MONTHS + 1];

	days[0] = 0;		// Dummy value. Not used
	days[1] = 31;		// January
	days[2] = 28;		// February
	days[3] = 31;		// March
	days[4] = 30;		// April
	days[5] = 31;		// May
	days[6] = 30;		// June
	days[7] = 31;		// July
	days[8] = 31;		// August
	days[9] = 30;		// September
	days[10] = 31;		// October
	days[11] = 30;		// November
	days[12] = 31;		// December

	for (int i = 1; i <= NUM_MONTHS; i++)
	{
		cout << "Month " << setw(2) << i << " has " << days[i] << " days.\n";
	}
	*/

	return 0;
}