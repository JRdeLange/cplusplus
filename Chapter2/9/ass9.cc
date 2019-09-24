#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) 
{
	for (size_t mltply = 1; mltply <= 10; ++mltply)	// Multiply from 1 to 10
	{	
		size_t base = stoi(argv[1]);				// Get base from arguments

		cout << mltply << " * " << base 			// Show the calculation
			 << " = " << mltply*base << '\n';		// and the answer
	}
}			
