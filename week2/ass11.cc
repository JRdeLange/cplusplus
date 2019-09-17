#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string ok{'o','k'};						//We make the ok string so that we can use the .compare() function.
	bool useCorrect = false;

	for (int iter = 0; iter < argc; ++iter) //We itterate through all arguments provided on the command line
	{
		if(!ok.compare(argv[iter]))			//If we find the flag ok we tell the program that we should use the correct method.
			useCorrect = true;
	}

	int numOfLines = 0;						//We use numOfLines to keep track of the number of lines that we have read from the file.
	string line;							//We need line so that we can use getline() to read the input line for line.

	if (useCorrect)
		while(1)							//The correct method first removes a line, then adds 1 to the number of line and then checks for the end of the file.
		{
			getline(cin,line);
			++numOfLines;
			if (cin.eof())
				break;
		}
	else
		while(1)							//The incorrect method first adds one to the number of lines, then checks for the end of the file and then removes the line.
		{
			++numOfLines;
			if (cin.eof())
				break;
			getline(cin,line);
		}

	if (numOfLines == 1)					//If there is only one line we use singular for the output
		cout << "\nThere is " 
			<< numOfLines 
			<< " line in this file \n";
	else									//Else we use plural
		cout << "\nThere are " 
			<< numOfLines 
			<< " lines in this file \n";
}