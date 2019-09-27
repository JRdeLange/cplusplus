#include <string>
#include <iostream>

using namespace std;

void fun(string s)
{
  size_t sum = 0;
  for (size_t idx = 0; idx < s.length(); ++idx)
    sum += s[idx];
}

void callValue(string const &prog)
{
  for (size_t idx = 0; idx < 10000000; ++idx)
    fun(prog);
}
