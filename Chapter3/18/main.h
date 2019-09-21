#ifndef MAIN_H
#define MAIN_H

struct ReturnValues {
  bool ok;       // Does the requested argument number exist?
  size_t nr;     // Number of requested arguments
  string value;  // Contains the requested argument, if the argument exists. Otherwise it's an empty string
}

  ReturnValues combine(int argCount, char **argVector);

bool structCall(int argCount, char **argVector);
bool boundCall(int argCount, char **argVector);

void printUsage();





#endif
