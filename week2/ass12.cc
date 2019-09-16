#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

int main() 
{
	string currLine;					// The string that will be worked on

	while (true)						// Keep reading the next line
	{
		getline(cin, currLine);			// Get the current line
		size_t firstSpace;				// Pos of first space is stored here
		firstSpace = currLine.find(' ');

		if (firstSpace != string::npos)	// No space means not two words, so
		{								// we dont need to do anything
			size_t lastSpace;			// Pos of the last space is stored here
			lastSpace = currLine.find_last_of(' ');

			size_t lastWordLength;		// The length of the last word is calculated
			lastWordLength = currLine.length() - lastSpace;
										// Replace the first word by the last
			currLine.replace(0, firstSpace, currLine, lastSpace+1, lastWordLength);
		}

	cout << currLine << "\n";			// Output the line
	}
}