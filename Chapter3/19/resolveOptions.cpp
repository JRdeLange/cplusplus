#include <string>
#include "main.ih"

Options resolveOptions(std::string input) {
					// Go through all valid inputs and return accordingly
  if (input == "-c") return CountCharacters;
  if (input == "-w") return CountWords;
  if (input == "-l") return CountLines;

  return Invalid;	// No valid flag given, so Invalid
}