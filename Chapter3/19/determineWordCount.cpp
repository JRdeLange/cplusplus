#include <iostream>
#include <string>

using namespace std;

size_t determineWordCount() 
{
  string word;
  size_t count = 0;					// Keeps track of the nr of words
  while(cin >> word)				// While there are words
    count++;						// add one per word

  return count;						// Retun the total
}