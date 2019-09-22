#include <iostream>

#include "main.h"

size_t determineLineCount() {
  std::string line;
  size_t count;
  while( getline(std::cin, line) )
    count++;
  return count;
}
