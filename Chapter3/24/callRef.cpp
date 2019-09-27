#include <string>

#include "main.h"

using namespace std;

void fun2(string const &s)
{
  size_t sum = 0;
  for (size_t idx = 0; idx < s.length(); ++idx)
    sum += s[idx];
}

void callRef(string const &prog)
{
  for (size_t idx = 0; idx < 10000000; ++idx)
    fun2(prog);
}
