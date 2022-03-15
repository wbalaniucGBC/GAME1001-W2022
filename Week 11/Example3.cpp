// Linear search
#include <iostream>
using namespace std;

// Function prototype
int searchList(const int[], int, int); // Array, size, value to search

int main()
{
	const int SIZE = 5;

	int tests[SIZE] = { 87, 75, 98, 100, 82 };
	int results;	// Holds the search result

	// Search the result for the value 100
	results = searchList(tests, SIZE, 100);

	// If searchList returns -1, 100 was not found
	if (results == -1)
	{
		cout << "You did not earn 100 points on any test. \n";
	}
	else
	{
		cout << "You earned 100 points on a test ";
		cout << (results + 1) << endl;
	}

	return 0;
}

int searchList(const int list[], int size, int value)
{
	int index = 0;		// Used as a subscript to search the array
	int position = -1;	// Used to record position of search value
	bool found = false;	// Flag to indicate if the value was found

	// Loop so long as index is less than array size AND item hasn't been found
	while (index < size && !found)
	{
		if (list[index] == value)
		{
			// Value found!
			found = true;
			position = index;	// Record the subscript where the value was found.
		}

		index++;
	}

	return position;
}