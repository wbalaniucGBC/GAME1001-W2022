// Bubble sort
#include <iostream>
using namespace std;

// Function prototypes
void showArray(const int[], int);
void sortArray(int[], int);

int main()
{
	const int SIZE = 6;

	int values[SIZE] = { 7, 2, 3, 8, 9, 1 };

	/* Bubble sort
	Pass 1: {2, 3, 7, 8, 1, 9}
	Pass 2: {2, 3, 7, 1, 8, 9}
	Pass 3: {2, 3, 1, 7, 8, 9}
	Pass 4: {2, 1, 3, 7, 8, 9}
	Pass 5: {1, 2, 3, 7, 8, 9}
	Pass 6: ------
	*/

	// Display the values
	cout << "The unsorted values are:\n";
	showArray(values, SIZE);

	// Sort
	sortArray(values, SIZE);

	// Display the values
	cout << "The sorted values are:\n";
	showArray(values, SIZE);
}

void showArray(const int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}

void sortArray(int array[], int size)
{
	int temp;
	bool madeAswap;

	do
	{
		madeAswap = false;
		for (int i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])	// Is left greater than right?
			{
				// SWAP!
				temp = array[i];			// temp = array[i]; array[i] = array[i], array[i + 1] = array [i + 1]
				array[i] = array[i + 1];	// temp = array[i]; array[i] = array[i + 1], array[i + 1] = array [i + 1]
				array[i + 1] = temp;		// temp = array[i]; array[i] = array[i + 1], array[i + 1] = array [i]
				madeAswap = true;
			}
		}
	} while (madeAswap);
}
