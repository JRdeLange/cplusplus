#include <iostream>

#include "main.h"

size_t determineLineCount() {
  std::string line;
  size_t count = 0;
  while( getline(std::cin, line) )
    ++count;
  return count;
}
