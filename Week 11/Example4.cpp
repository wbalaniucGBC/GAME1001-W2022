// Binary search
#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int[], int, int);
//
//int main()
//{
//	const int SIZE = 20;
//
//	// Create an array of ID numbers sorted in ascending order
//	int IDnums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
//						234, 289, 296, 310, 319, 388, 394,
//						417, 429, 442, 521, 536, 600};
//
//	int empID,			// Hold the ID to search for
//		results;		// Hold the search results
//
//	// Get the employee ID to search for
//	cout << "Enter the employee ID you wish to search for: ";
//	cin >> empID;
//
//	// Search
//	results = binarySearch(IDnums, SIZE, empID);
//
//	if (results == -1)
//	{
//		cout << "That number does not exist in the array.\n";
//	}
//	else
//	{
//		cout << "ID " << empID << " was found in element " << results << " of the array.\n";
//	}
//
//	return 0;
//}

int binarySearch(const int array[], int size, int value)
{
	int first = 0,			// First array element
		last = size - 1,	// Last array element
		middle,				// Midpoint
		position = -1;		// Position of search value

	bool found = false;		// Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;	// Calculates midpoint
		if (array[middle] == value)
		{
			// Found!
			found = true;
			position = middle;
		}
		else if(array[middle] > value)
		{
			// Value in lower half
			last = middle - 1;
		}
		else
		{
			// Value in the upper half
			first = middle + 1;
		}
	}

	return position;
}