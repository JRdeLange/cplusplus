#include <cstdlib>
#include <iostream>
#include <unistd.h>

#include <string>
#include <vector>

#include "main.h"


int main() {

  std::vector<std::string> arr;
  
  for(size_t idx = 0; idx < sizeof(environ)/sizeof(char**); idx++) {
    arr.push_back(environ[idx]);
  }

  convertToASCII(arr.front());

  // quicksort(arr, 0, sizeof(environ)/sizeof(char**));

  return 0;
}
