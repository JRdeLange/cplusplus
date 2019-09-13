#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) 
{
    int base;										// The integer
    base = stoi(argv[1]);							// into which the base is stored

    for (int mltply = 1; mltply <= 10; ++mltply)	// Multiply from 1 to 10

    	cout << mltply << " * " << base 			// Show the calculation
    	<< " = " << mltply*base << "\n";			// and the answer
}			
