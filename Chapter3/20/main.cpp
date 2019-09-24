#include <cstdlib>
#include <iostream>

#include "main.h"

size_t envLength(char **env) {
  size_t count = 0;
  while(1) {
    if (*env++ == 0)
      break;
    count++;
  }
  return count;
}

int main(int argc, char *argv[], char **envp) {
  // TODO: Oof, this code is ugly
  size_t envSize = envLength(envp);
  std::string *currentEnv = new std::string[envSize];
  for(size_t i = 0; i < envSize; i++) {
    currentEnv[i] = envp[i];
  }

  quicksort(currentEnv, 0, envSize);

  for 

  delete [] currentEnv;
  return 0;
}
