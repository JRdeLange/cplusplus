#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	bool useCorrect = false;				  // We use this variabe to save 
											  // which method to use.

	if (argc > 1 and string(argv[1]) == "ok") // We check for the flag "ok" on
	{										  // The command line. If the flag
		useCorrect = true;					  // is present we tell the program
	}										  // to use the correct method.

	size_t numOfLines = 0;					  // We use numOfLines to keep  
											  // track of the number of lines.
	string line;							  // We need line so that we can 
											  // use getline().

	if (useCorrect)							  // We check the result of the  
		while (true)						  // command line scan here. 
		{			
			if (cin.eof())					  // The correct method first  
				break;						  // checks whether the end of the 
			getline(cin,line);				  // file has been reached, it then 
			++numOfLines;					  // removes a line and adds 1 to  
		}									  // the number of lines
	else
		while (true)						  // The incorrect method first 
		{									  // adds one to the number of   
			++numOfLines;					  // lines, then checks for the end 
			if (cin.eof())					  // of the file and then removes 
				break;						  // the line.
			getline(cin,line);
		}

	cout << numOfLines 						  // We print the number of lines.
		<< "\n";
}