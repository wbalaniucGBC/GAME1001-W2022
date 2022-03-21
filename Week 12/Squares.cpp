#include "Squares.h""

// Constructor
Squares::Squares(int len = 1)
{
	length = len;
	sq = new int[length];	// Dynamically allocated array

	for (int i = 0; i < length; i++)
	{
		sq[i] = (i + 1) * (i + 1);
	}
	// Trace
	cout << "Constructing an object of size " << length << endl;
}

void Squares::print()
{
	for (int i = 0; i < length; i++)
	{
		cout << sq[i] << " ";
	}
	cout << endl;
}