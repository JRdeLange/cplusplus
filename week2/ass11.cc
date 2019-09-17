#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string ok{'o','k'};						// We make the ok string so that we can 
	bool useCorrect = false;				// use the .compare() function. We use 
											// useCorrect to save which method to use

	for (int iter = 0; iter < argc; ++iter) // We itterate through all arguments 
	{										// provided on the command line. 
		if(!ok.compare(argv[iter]))			// If we find the flag ok we tell the 
			useCorrect = true;				// program that we should use the correct 
	}										// method.

	size_t numOfLines = 0;					// We use numOfLines to keep track of the 
											// number of lines.
	string line;							// We need line so that we can use getline().

	if (useCorrect)							// We check the result of the command line 
		while(1)							// scan here. 
		{									 
			getline(cin,line);				// The correct method first removes a line,
			++numOfLines;					// then adds 1 to the number of lines and 
			if (cin.eof())					// then checks for the end of the file.
				break;
		}
	else
		while(1)							// The incorrect method first adds one to the 
		{									// number of lines, then checks for the end  
			++numOfLines;					// of the file and then removes the line.
			if (cin.eof())
				break;
			getline(cin,line);
		}

	if (numOfLines == 1)					// If there is only one line we use singular for
		cout << "\nThere is " 				// the output
			<< numOfLines 
			<< " line in this file \n";
	else									//Else we use plural
		cout << "\nThere are " 
			<< numOfLines 
			<< " lines in this file \n";
}