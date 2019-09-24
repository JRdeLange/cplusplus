#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>

#include "main.h"

// Function that splits on the ' ' delimiter
void split(const std::string& str, std::vector<std::string>& result)
{
  // We put the string in a stream
  std::istringstream iss(str);
  // We extract the tokens from the stream
  // Which are delimited by a space
  // And put it in a string vector
  std::copy(std::istream_iterator<std::string>(iss),
            std::istream_iterator<std::string>(),
            std::back_inserter(result));
}
