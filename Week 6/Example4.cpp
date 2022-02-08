// Partially initialized array
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 7;
	int numbers[SIZE] = { 1, 2, 4, 8 };	// Fine!  Acceptable. Array: 1, 2, 4, 8, 0, 0, 0

	cout << "Here ar ethe contents of the array:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	return 0;
}