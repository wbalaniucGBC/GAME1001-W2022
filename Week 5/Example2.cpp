#include <iostream>
using namespace std;

//int main()
//{
//	// Constant Values
//	const int MIN_A_SCORE = 80,
//		MIN_B_SCORE = 70,
//		MIN_C_SCORE = 60,
//		MIN_D_SCORE = 50,
//		MIN_POSSIBLE_SCORE = 0;
//
//	int numStudents,	// The total number of students
//		student,		// The current student being processed
//		testScore;		// Current student's numeric test score.
//	char grade;			// Current student's letter grade
//	bool goodScore = true;
//
//	// Get the number of students
//	cout << "How mnay students do you have grades for?";
//	cin >> numStudents;
//
//	// Initialize the loop control variable
//	student = 1;
//
//	// Loop once for each student.
//	while (student <= numStudents)
//	{
//		// Get the student's numeric score
//		cout << "\nEnter the numeric test score for student #" << student << ": ";
//		cin >> testScore;
//
//		// Determine the letter grade
//		if (testScore >= MIN_A_SCORE)
//		{
//			grade = 'A';
//		}
//		else if (testScore >= MIN_B_SCORE)
//		{
//			grade = 'B';
//		}
//		else if (testScore >= MIN_C_SCORE)
//		{
//			grade = 'C';
//		}
//		else if (testScore >= MIN_D_SCORE)
//		{
//			grade = 'D';
//		}
//		else if (testScore >= MIN_POSSIBLE_SCORE)
//		{
//			grade = 'F';
//		}
//		else
//		{
//			goodScore = false;
//		}
//
//		// Display the letter grade
//		if (goodScore)
//		{
//			cout << "The letter grade is " << grade << endl;
//		}
//		else
//		{
//			cout << "The score cannot be below zero. \n";
//		}
//
//		// Set student to the next student
//		student = student + 1;
//	}
//
//	return 0;
//}