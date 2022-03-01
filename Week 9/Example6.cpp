#include <iostream>
using namespace std;

void anotherFunction();
int num = 2;

int main()
{
	cout << "In main, num is " << num << endl;
	anotherFunction();
	cout << "Back in main, num is " << num << endl;
}

void anotherFunction()
{
	int num = 20;

	cout << "In anotherFunction, num is " << num << endl;
}