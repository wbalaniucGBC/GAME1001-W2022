#include <iostream>
using namespace std;

// Default arguments
void displayStars(int starsPerRow = 10, int numRows = 1)
{
	// Nested loop. The outer loop controls the rows and the 
	// inner loop controls the number of stars per row.
	for (int row = 1; row <= numRows; row++)
	{
		for (int star = 1; star <= starsPerRow; star++)
		{
			cout << '*';
		}

		cout << endl;
	}
}

//int main()
//{
//	displayStars(7, 3);
//	cout << endl;
//	displayStars();
//	cout << endl; 
//	displayStars(5);
//
//	return 0;
//}
