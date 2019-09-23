#include <iostream>
#include <string>

#include "main.h"

size_t determineCharacterCount() {
  std::string line;
  size_t count = 0;
  while(std::getline(std::cin, line))
    // Note: this includes the '\n' and EOF characters
    count += line.length();
  return count;
}
