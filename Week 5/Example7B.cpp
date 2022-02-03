#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//int main()
//{
//	ifstream inputFile;
//	string name;
//
//	// Open the file
//	inputFile.open("Friends.txt");	// This won't work if the file doesn't exist
//
//	// Check if the stream opened successfully.
//	if (inputFile)
//	{
//		// File opened successfully.
//		cout << "Here are the names stored in the Friends.txt file.\n";
//
//		// Loop until the EOF is reached. (EOF - End of File)
//		while (inputFile >> name)
//		{
//			cout << name << endl;
//		}
//	}
//	else
//	{
//		// File cannot be opened. 
//		cout << "Cannot open the file provided!";
//	}
//
//	inputFile.close();
//
//	return 0;
//}

// Step to open a file
// 1. Create the stream object (ofstream, ifstream, fstream)
// 2. Open the file
// 2a. Check that the file was successfully opened.
// 3. Use the file.
// 4. Close the file