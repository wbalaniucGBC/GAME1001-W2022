// Look at if/else-if statements
// A, B, C, D, F
#include <iostream>
using namespace std;

int main()
{
	// Create named constants to hold minimum scores required for each grade letter
	const int MIN_A_SCORE = 80,
		MIN_B_SCORE = 70,
		MIN_C_SCORE = 60,
		MIN_D_SCORE = 50,
		MIN_POSSIBLE_SCORE = 0;

	int testScore;			// Hold a numeric test score
	char grade;				// Hold a letter grade
	bool goodScore = true;

	cout << "Enter your numeric test score and I will\ntell you the letter grade you earned: ";
	cin >> testScore;

	// Determine the letter grade

	if (testScore >= MIN_A_SCORE)
	{
		grade = 'A';
	}
	else if(testScore >= MIN_B_SCORE)
	{
		grade = 'B';
	}
	else if (testScore >= MIN_C_SCORE)
	{
		grade = 'C';
	}
	else if (testScore >= MIN_D_SCORE)
	{
		grade = 'D';
	}
	else if (testScore >= MIN_POSSIBLE_SCORE)
	{
		grade = 'F';
	}
	else // Trailing else. 
	{
		goodScore = false;	// The score was below 0
	}

	// Display the letter grade
	if (goodScore)
	{
		cout << "Your grade is " << grade << endl;
	}
	else
	{
		cout << "The score cannot be below zero." << endl;
	}


	return 0;
}