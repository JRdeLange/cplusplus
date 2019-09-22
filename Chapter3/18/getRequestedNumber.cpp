#include <stdexcept>
#include <iostream>

#include "main.h"

using namespace std;

size_t getRequestedNumber(int argCount, string arg) {
  size_t pos;
  // Assumption: argv[1] is an unsigned int
  size_t x = 0;
  try {
    x = stoi(arg, &pos); // Get requested number and cast to size_t
    if (pos < arg.size())
      cerr << "Trailing characters after number: " << arg << '\n'; // Check to see if the number is malformed
  } catch(std::invalid_argument& e){
    // if no conversion could be performed, i.e. malformed input
    cerr << e.what();
  } catch(std::out_of_range& e){
    // if the converted value would fall out of the range of the result type
    cerr << e.what();
  } catch(...) {
    // everything else
    cerr << "An unknown error has occurred.\n";
  }
  return x;
}
