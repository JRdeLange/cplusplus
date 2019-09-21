#include <iostream>
#include "main.h"
#include <stdexcept>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  if(structCall(argc, argv))
    boundCall(argc, argv);

  return 0;
}

ReturnValues combine(size_t requested, int argCount, char **argVector) {
  ReturnValues ret;
  ret.nr = requested;
  ret.ok = (requested <= (size_t)argCount);
  if(!ret.ok) {
    // Error, no requested element
    ret.value = "";
    return ret;
  }

  ret.value = argVector[requested];
  return ret;
}

bool structCall(int argCount, char **argVector) {

  if (argCount <= 1) {
    cout << "Error, no arguments\n";
    return false;
  }

  string arg = argVector[1];
  size_t pos;
  int x = stoi(arg, &pos);
  if (pos < arg.size())
    cerr << "Trailing characters after number: " << arg << '\n';

  size_t nr = x;

  ReturnValues ret = combine(nr, argCount, argVector);
  if (ret.ok) {
    cout << ret.nr << " " << ret.value;
  } else {
    printUsage();
    return false;
  }

  return true;
}

void boundCall(int argCount, char **argVector) {
  // TODO
  structCall(argCount, argVector);
}

void printUsage() {
  cout << "Usage: African or European swallow?\n";
}
