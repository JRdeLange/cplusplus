#include <functional>
#include <iostream>

#include "main.ih"

using namespace std;

void boundCall(int argCount, char **argVector) {
  // No need for input validation, since this function only fires
  // when structCall has passed

  // Bind a function to combine
  auto ret = bind(combine, getRequestedNumber(argVector[1]), argCount, argVector);
  if (ret().ok) { // Same process as in structCall(), but now with bound function
    cout << ret().nr << " " << ret().value << "\n";
  } else {
    printUsage();
  }
}
