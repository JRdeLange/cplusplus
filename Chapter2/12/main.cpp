#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "main.h"

int main()
{
  // The string that will be worked on
  std::string currLine;

	// Get the next line until EOF
  while (std::getline(std::cin, currLine))
    {
      std::vector<std::string> results;

      // We split the currLine into a vector called results
      // Since it's an iterator the delimiter is automatically 'space'
      split(currLine, results);

      // We swap based on the iterator that is under the vector
      std::iter_swap(results.begin(), results.begin() + results.size() - 1);

      // We define a simple lambda function that helps us print the vector
      auto print = [](const std::string& n) { std::cout << " " << n; };
      // We loop over the results vector and print
      std::for_each(results.begin(), results.end(), print);
      std::cout << "\n";
    }

  return 0;
}
