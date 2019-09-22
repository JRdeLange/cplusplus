#include <iostream>

#include "main.h"

using namespace std;

bool structCall(int argCount, char **argVector) {
  if (argCount <= 1) {
    cout << "Error, no arguments\n"; // Check if an initial argument is given
    return false;
  }

  // Call combine function to retrieve requested argument
  ReturnValues ret = combine(getRequestedNumber(argCount, argVector[1]), argCount, argVector);
  if (ret.ok) {
    cout << ret.nr << " " << ret.value << "\n"; // Print requested arguments
  } else { // Print usage if requested argument does not exist
    printUsage();
    return false;
  }

  return true;
}
