#include "main.h"

ReturnValues combine(size_t requested, int argCount, char **argVector) {
  ReturnValues ret; // Define a struct to eventually return
  ret.nr = requested;
  ret.ok = (requested < (size_t)argCount); // Is true if the requested argument exists
  if(!ret.ok) {
    // Error, no requested element
    ret.value = ""; // Return an empty string
    return ret;
  }

  ret.value = argVector[requested]; // Return the string with the requested word
  return ret;
}
