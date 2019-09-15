#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

int main() 
{
	const int highestAscii = 255;		// Since ascii goes from 0 to 255
	string allLetters;					// This will be the output
										// Loop through all possible chars
	for (int symbol = 0; symbol < highestAscii; ++symbol)
		if (isalpha(symbol))			// If symbol is a letter
			allLetters += symbol;		// add it to the string
	
	cout << allLetters << "\n";			// output the string
}