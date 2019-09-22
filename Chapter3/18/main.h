#ifndef MAIN_H
#define MAIN_H

#include <cstddef> // size_t
#include <string>

struct ReturnValues {
  bool ok;       // Does the requested argument number exist?
  size_t nr;     // Number of requested arguments
  std::string value;  // Contains the requested argument, if the argument exists. Otherwise it's an empty string
};


ReturnValues combine(size_t requested, int argCount, char **argVector);

bool structCall(int argCount, char **argVector);
void boundCall(int argCount, char **argVector);

size_t getRequestedNumber(int argCount, std::string arg);

void printUsage();


#endif
