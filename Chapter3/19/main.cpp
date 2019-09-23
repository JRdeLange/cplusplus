#include <iostream>

#include "main.h"

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    printUsage();
    return 0;
  }

  switch (resolveOptions(argv[1])) {
  case CountCharacters:
    // Determine the number of characters in the input stream
    std::cout << determineCharacterCount() << "\n";
    break;
  case CountWords:
    // Determine the number of words (delimited by space characters)
    std::cout << determineWordCount() << "\n";
    break;
  case CountLines:
    // Determine the number of lines
    std::cout << determineLineCount() << "\n";
    break;
  default:
    printUsage();
    break;
  }

  return 0;
}
