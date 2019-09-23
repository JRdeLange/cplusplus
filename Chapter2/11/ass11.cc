#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	bool useCorrect = false;				  // We use this variabe to save which method
											  // to use.

	if (argc > 1 and string(argv[1]) == "ok") // We check for the flag "ok" on the command
	{										  // line. If the flag is present we tell the
		useCorrect = true;					  // program to use the correct method.
	}

	size_t numOfLines = 0;					  // We use numOfLines to keep track of the 
											  // number of lines.
	string line;							  // We need line so that we can use getline().

	if (useCorrect)							  // We check the result of the command line 
		while (true)						  // scan here. 
		{			
			if (cin.eof())					  // The correct method first checks whether 
				break;						  // the end of the file has been reached, it
			getline(cin,line);				  // then removes a line and adds 1 to the
			++numOfLines;					  // number of lines 
		}
	else
		while (true)						  // The incorrect method first adds one to the 
		{									  // number of lines, then checks for the end  
			++numOfLines;					  // of the file and then removes the line.
			if (cin.eof())
				break;
			getline(cin,line);
		}

	cout << numOfLines << '\n';				  // We print the number of lines.
}