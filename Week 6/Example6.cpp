#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//int main()
//{
//	char ch;
//	int vowelCount = 0;
//	string sentence;
//
//	cout << "Enter any sentence you wish and I will tell you how many vowels are in it.\n";
//	getline(cin, sentence);
//
//	// Challenge!
//	for (int i = 0; i < sentence.length(); i++)
//	{
//		// Uppercase a copy of the next character and assign it to ch
//		ch = toupper(sentence[i]);
//
//		// If the character is a vowel, increment my count
//		switch (ch)
//		{
//			case 'A':
//			case 'E':
//			case 'I':
//			case 'O':
//			case 'U':
//				vowelCount++;
//		}
//	}
//
//	cout << "There are " << vowelCount << " vowles in the sentence.\n";
//
//	return 0;
//}