#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  for (int i = 1; i < argc; i++) { // 'i' is set to 1 in order to skip the program name
    if (argv[i].Find(".") != std::string::npos) { // Check to see if there is a dot
      sum(argv, argc, 1); // Sum with double values
      return 0;
    }
  }

  sum(argv, argc) // Sum with integral values
  return 0;
}
