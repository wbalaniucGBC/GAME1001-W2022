#pragma once
#include <iostream>
using namespace std;

class Squares
{
private:
	int length;	// How long is the sequence;
	int* sq;	// Dynamically allocated array
public:
	Squares(int);	// Default constructor
	~Squares()
	{
		delete[] sq;
		// Trace
		cout << "Destroy object of size " << length << endl;
		sq = nullptr;
	}

	void print();
};
