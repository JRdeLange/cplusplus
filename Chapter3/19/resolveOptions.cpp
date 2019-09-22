#include <string>

#include "main.h"

Options resolveOptions(std::string input) {
  if (input == "-c") return CountCharacters;
  if (input == "-w") return CountWords;
  if (input == "-l") return CountLines;

  return Invalid;
}
