// Demonstrate the range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string consoles[] = { "PC", "Playstation 5", "Xbox One X", "Nintendo Switch", "Nintendo 64",
							"Playstation 4", "Gizmondo", "Ouya", "OnLive", "Atari 2600" };

	// Display the values in the array
	for (string val : consoles)
	{
		cout << val << endl;
	}

	return 0;
}