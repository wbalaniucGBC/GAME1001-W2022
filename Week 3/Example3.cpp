// Demonstrate the use of static_cast<>()
#include <iostream>
using namespace std;

int main()
{
	int books,	
		months;
	double booksPerMonth;

	// Get user input
	cout << "How many books do you plan to read? ";
	cin >> books;
	cout << "How many months will it take you to read them? ";
	cin >> months;

	booksPerMonth = books / static_cast<double>(months);
	cout << "That is " << booksPerMonth << " books per month.\n";

	return 0;
}