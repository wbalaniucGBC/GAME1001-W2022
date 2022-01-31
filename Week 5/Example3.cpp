#include <iostream>
using namespace std;

int main()
{
	/*
	int count = 1;	// Loop control variable.
	while (count < 6)
	{
		cout << count << " ";
		count++; // count = count + 1;
	}

	cout << endl;

	count = 5;
	while (count > 0)
	{
		cout << count << " ";
		count--;
	}
	cout << endl;
	*/

	int num = 4;

	// Illustrate postfix and prefix ++ operator
	cout << num << "   ";
	cout << num++ << "   ";
	cout << num << "   ";
	cout << ++num << "\n";

	return 0;
}