#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void displayValue(int, double);

//int main()
//{
//	cout << "I am passing 5 to displayValue.\n";
//	displayValue(5, 10);
//	displayValue(20, 10.1);
//	displayValue(14, 20.1);
//	displayValue(-100, -100.1);
//	cout << "Now I am back in main.\n";
//
//	return 0;
//}

void displayValue(int num, double num2)
{
	cout << "The value is " << num << " " << num2 << endl;
}