#include <iostream>
#include <string>

using namespace std;

size_t determineLineCount() 
{
  string line;
  size_t count = 0;					// Keeps track of number of lines
  while (getline(cin, line))		// While there are lines, for each
    ++count;						// add one to the current total
	
  return count;						// And return it
}