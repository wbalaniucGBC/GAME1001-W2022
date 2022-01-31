#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double something = 10;

	streamsize s = cout.precision();

	cout << fixed << showpoint << setprecision(2);

	cout << something << endl;

	cout << scientific << noshowpoint << setprecision(s);

	cout << something;

	return 0;
}