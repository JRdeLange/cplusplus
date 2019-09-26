#include <iostream>
#include <string>

using namespace std;

size_t determineCharacterCount() 
{
  string line;						
  size_t count = 0;					// Keeps track of the nr of chars
  while(getline(cin, line))			// For each line
    // Note: this includes the '\n' and EOF characters
    count += line.length();			// count the chars and add to total

  return count;						// Return the result
}