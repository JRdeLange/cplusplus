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

		if (firstSpace != string::npos)	// If there is no space we dont need
		{								// to switch words
			size_t lastSpace;
			lastSpace = currLine.find_last_of(' ');

			if (lastSpace != string::npos)	
			{
				size_t lastWordLength;	//The length of the last word
				lastWordLength = currLine.length() - lastSpace;
				string lastWord;
				//lastWord.copy(currLine, lastWordLength, lastSpace);



				currLine.replace(0, firstSpace, currLine, lastSpace+1, lastWordLength);
			}

		}
	cout << currLine << "\n";
	}
}