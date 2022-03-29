// String find and insert functions (string class)
#include <iostream>
#include <string>
using namespace std;

string dollarFormat(string);	// Prototype

int main()
{
	string input;

	// Get a dollar amount from the user
	cout << "Enter a dollar amount in the form of nnnnn.nn: ";
	cin >> input;

	// Display the formatted dollar amount
	cout << "Formatted amount:   " << dollarFormat(input) << endl;

	return 0;
}

string dollarFormat(string original)
{
	string formatted = original;
	int dp = formatted.find('.');
	int pos = dp;
	while (pos > 3)
	{
		pos -= 3; // pos = pos - 3
		formatted.insert(pos, ",");
	}
	formatted.insert(0, "$");
	return formatted;
}

// 12,345,678.90