#ifndef MAIN_H
#define MAIN_H

enum Options {
  CountCharacters,
  CountWords,
  CountLines,
  Invalid,
};

Options resolveOptions(std::string input);

void printUsage();

size_t determineCharacterCount();
size_t determineWordCount();
size_t determineLineCount();

#endif
