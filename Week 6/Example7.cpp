// Use 2D arrays
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_DIVS = 3;				// Number of divisions
	const int NUM_QTRS = 4;				// Number of quarters
	double sales[NUM_DIVS][NUM_QTRS];	// 2D array with 3 rows and 4 columns
	double totalSales = 0;				// Accumulated running total sales
	int div, qtr;						// Loop counters
	ifstream inputFile;					// Input file stream

	inputFile.open("sales2.dat");

	if (!inputFile)
	{
		cout << "Error opening data file.\n";
	}
	else
	{
		// Format my output
		cout << fixed << showpoint << setprecision(2);
		cout << "Quatrerly Sales by Division\n\n";

		// Because we are using a 2D array, we require a nest for loop.
		// Outside loop = rows
		// Inside loop = columns
		for (div = 0; div < NUM_DIVS; div++)
		{
			for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
				cout << "Division " << (div + 1) << ", Quarter " << (qtr + 1) << ": $";
				inputFile >> sales[div][qtr];
				cout << sales[div][qtr] << endl;
			}
			cout << endl;
		}

		inputFile.close();

		// Cycle through our 2D array to add all elements together (CHALLENGE!)
		for (div = 0; div < NUM_DIVS; div++)
		{
			for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
				totalSales += sales[div][qtr];
			}
		}

		// Display the total
		cout << "The total sales for the company are: $" << totalSales << endl;
	}

	return 0;
}