#include <iostream>
using namespace std;

// Function prototype
void showStatic();

int main()
{
	for (int i = 0; i < 5; i++)
	{
		showStatic();
	}
	
	return 0;
}

void showStatic()
{
	static int numCalls = 0;

	cout << "This function has been called " << ++numCalls << " times." << endl;
}