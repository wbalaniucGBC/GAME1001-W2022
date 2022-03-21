#include <iostream>
#include <iomanip>
using namespace std;

//int main()
//{
//	double* sales = nullptr,
//			total = 0.0,
//			average;
//	int numDays;
//
//	// Get the number of days of sales
//	cout << "How many days of sales figures do you wish to process? ";
//	cin >> numDays;
//
//	// Dynamically allocate an array to hold sales data
//	sales = new double[numDays];	// Allocated memory
//
//	// Get the sales figures for each day
//	cout << "Enter the sales figures below.\n";
//	for (int i = 0; i < numDays; i++)
//	{
//		cout << "Day " << (i + 1) << ": ";
//		cin >> sales[i];
//	}
//
//	// Calculate the total sales
//	for (int i = 0; i < numDays; i++)
//	{
//		total += sales[i];
//	}
//
//	// Calculate the average
//	average = total / numDays;
//
//	// Display the results
//	cout << setprecision(2) << fixed << showpoint;
//	cout << "\n\nTotal Sales: $" << total << endl;
//	cout << "Average Sales: $" << average << endl;
//
//	// Free dynamically allocated memory
//	delete[] sales;
//	sales = nullptr;
//
//	return 0;
//}