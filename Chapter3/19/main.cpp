#include <iostream>
#include "main.ih"

using namespace std;

int main(int argc, char *argv[]) 
{
  if (argc <= 1)      // Invalid arguments given
  {            
    printUsage();     // so show usage
    return 0;
  }

  switch (resolveOptions(argv[1])) 
  {
  case CountCharacters:
                      // Count the characters in the input
    cout << determineCharacterCount() << "\n";
    break;
  case CountWords:
                      // Count the words in the input
                      // (delimited by space characters)
    cout << determineWordCount() << "\n";
    break;
  case CountLines:
                      // Count the lines in the input
    cout << determineLineCount() << "\n";
    break;
  default:            // Invalid arguments given
    printUsage();     // so show usage
  }

  return 0;
}