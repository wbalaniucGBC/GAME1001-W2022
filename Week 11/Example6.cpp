// Selection sort
#include <iostream>
using namespace std;

// Function prototypes
void selectionSort(int[], int);
void showArray(const int[], int);

int main()
{
	const int SIZE = 6;

	int values[SIZE] = { 7, 2, 3, 8, 9, 1 };

	/* Selection sort
	Pass 1: {1, 2, 3, 8, 9 ,7}
	Pass 2: {1, 2, 3, 8, 9, 7} No exchange
	Pass 3: No exchange
	Pass 4: {1, 2, 3, 7, 9, 8}
	Pass 5: {1, 2, 3, 7, 8, 9}
	*/

	// Display the values
	cout << "The unsorted values are:\n";
	showArray(values, SIZE);

	// Sort
	selectionSort(values, SIZE);

	// Display the values
	cout << "The sorted values are:\n";
	showArray(values, SIZE);
}

// Selection sort
void selectionSort(int array[], int size)
{
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int i = startScan + 1; i < size; i++)
		{
			if (array[i] < minValue)
			{
				minValue = array[i];
				minIndex = i;
			}
		}
		// Swap!
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

void showArray(const int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}