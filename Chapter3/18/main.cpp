#include <iostream>
#include "main.h"
#include <stdexcept>
#include <string>



using namespace std;

int main(int argc, char *argv[]) {
  if(structCall(argc, argv))
    boundCall(argc, argv)

  return 0;
}

bool structCall(int argCount, char **argVector) {

  if (argCount <= 1) {
    cout << "Error, no arguments\n";
    return false;
  }

  string arg = argv[1];
  try {
    size_t pos;
    int x = stoi(arg, &pos);
    if (pos < arg.size()) {
      cerr << "Trailing characters after number: " << arg << '\n';
    }
  } catch (invalid_argument const &ex) {
    cerr << "Invalid number: " << arg << '\n';
  } catch (out_of_range const &ex) {
    cerr << "Number out of range: " << arg << '\n';
  }

  size_t nr = x;

  ReturnValues ret = combine(nr, argVector);
  if (ret.ok) {
    cout << ret.nr << " " << ret.value
  } else {
    printUsage();
    return false;
  }

  return true;
}

void printUsage() {
  cout << ""
}
