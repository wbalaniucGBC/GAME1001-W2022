// Simple while loop
#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	int hellos = 0;

	cout << "Enter how many hello's you want printed: ";
	cin >> hellos;

	while (count <= hellos)	// Loop control variable
	{
		cout << "Hello  ";
		count = count + 1;
	}

	cout << "\nThat's all!\n";

	return 0;
}