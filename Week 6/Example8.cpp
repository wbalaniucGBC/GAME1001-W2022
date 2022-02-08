// Using Vectors
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	const int NUM_EMPS = 5;
	vector<int> hours(NUM_EMPS);
	vector<double> payRate(NUM_EMPS);
	double grossPay;

	cout << "Enter the hours worked and hourly pay rates of " << NUM_EMPS << " employees. \n";

	for (int i = 0; i < NUM_EMPS; i++)
	{
		cout << "\nHours worked by employee #" << (i + 1) << ": ";
		cin >> hours[i];
		cout << "Hourly pay rate for this employee: $";
		cin >> payRate[i];
	}

	// Display each employee's gross pay
	cout << "\nHere is the gross pay for each employee:\n";
	cout << fixed << showpoint << setprecision(2);

	for (int i = 0; i < NUM_EMPS; i++)
	{
		grossPay = hours[i] * payRate[i];
		cout << "Employeee #" << (i + 1);
		cout << ": $" << setw(7) << grossPay << endl;
	}

	cout << "\n\nCongratulations! You found another employee!\n\n";
	double hoursWorked, payRateNew;

	cout << "\nHours worked by new employee #" << hours.size() + 1 << ": ";
	cin >> hoursWorked;
	cout << "Hourly pay rate for this employee: $";
	cin >> payRateNew;

	hours.push_back(hoursWorked);
	payRate.push_back(payRateNew);

	for (int i = 0; i < hours.size(); i++)
	{
		grossPay = hours[i] * payRate[i];
		cout << "Employeee #" << (i + 1);
		cout << ": $" << setw(7) << grossPay << endl;
	}

	cout << "Oh No! Your new employee has just abruptly quit after their first paycheque!\n\n";
	hours.pop_back();	// Removed the last item put into the vector
	payRate.pop_back();

	for (int i = 0; i < hours.size(); i++)
	{
		grossPay = hours[i] * payRate[i];
		cout << "Employeee #" << (i + 1);
		cout << ": $" << setw(7) << grossPay << endl;
	}

	cout << "OH NO!! My company is shutting down!!!\n\n";
	hours.clear();
	payRate.clear();

	if (hours.empty() && payRate.empty())
	{
		cout << "All my employees have left! Boo hoo!\n\n";
	}

	return 0;
}

// If vectors are go versatile and good, why use arrays to begin with?

// A: Performance!