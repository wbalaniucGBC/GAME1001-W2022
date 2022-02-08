#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];		// Hold hours worked for 6 employees
	int i = 0;

	ifstream inputFile;

	// Open the file
	inputFile.open("work.dat");
	// Check the connection
	if (!inputFile)
	{
		cout << "Error opening data file\n";
	}
	else
	{
		// Use the file
		// Read the numbers from the file into the array
		while (i < NUM_EMPLOYEES && inputFile >> hours[i])
		{
			i++;
		}

		// Close the file
		inputFile.close();

		// Display the contents of the array
		cout << "The hours worked by each employee are:\n";
		for (i = 0; i < NUM_EMPLOYEES; i++)
		{
			cout << "Employee " << i + 1 << ": " << hours[i] << endl;
		}
	}
	
	return 0;
}