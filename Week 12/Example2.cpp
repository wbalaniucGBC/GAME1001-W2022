#include <iostream>
using namespace std;

int main()
{
	short numbers[] = { 10, 20, 30, 40, 50 };

	cout << "The first element of the array is ";
	cout << *numbers << endl;
	cout << *(numbers + 1) << endl;
	cout << *(numbers + 4) << endl;
	cout << *(numbers + 5) << endl;

	return 0;
}