// Random numbers - With a seed
#include <iostream>
#include <cstdlib>	// Header file needed for rand and srand
#include <ctime>	// Header file needed for time
using namespace std;

// time(0) - Represents the number of seconds since Jan 1, 1970 (unix timestamp)

int main()
{
	// unsigned seed;	// Random generator seed

	// Ask the user for a seed value
	// cout << "Enter a seed value: ";
	// cin >> seed;
	// seed = time(0);	

	// Set the random generator seed before calling rand()
	srand(time(0));

	// Generate and print three random numbers;
	cout << rand() << "    ";
	cout << rand() << "    ";
	cout << rand() << endl;

	return 0;
}