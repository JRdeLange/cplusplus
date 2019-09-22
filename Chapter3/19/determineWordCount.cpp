#include <iostream>

#include "main.h"

size_t determineWordCount() {
  std::string word;
  size_t count = 0;
  while(std::cin >> word)
    count++;
  return count;
}
