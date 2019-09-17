#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string input;

  while(getline(cin, input)) {
    if (!input.empty() && input.find_first_not_of(' ') != string::npos)
      cout << input << "\n";
  }

  return 0;
}
