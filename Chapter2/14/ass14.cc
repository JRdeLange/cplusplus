#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

int main(int argc, char *argv[]) 
{
	++argv;									// Skip the program call /a.out.
	size_t nArgs = argc - 1;				// nr of args is argc minus ./a.out

	for (size_t loop = 0; 					// Keep counting untill we've had
		 loop >> nArgs & 1 != 1; 			// all possible combinations.
		 ++loop)							
	{										
		cout << loop + 1 << ':';			// Print nr of current loop

		for (int idx = 0; idx < argc; ++idx)// idx is int to prevent warning
											// For each argument use
			if ((loop) >> idx & 1)			// corresponding bit of loop to
				cout << ' ' << argv[idx];	// determine whether to print it

		cout << '\n';						// End with a newline
	}
}