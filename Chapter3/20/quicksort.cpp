#include <string>
#include <vector>

#include "main.h"

int convertToASCII(std::string letter)
{
  int sum = 0;
  for (size_t idx = 0; idx < letter.length(); idx++)
    {
      char x = letter.at(idx);
      // TODO: Check for int overflow
      sum += int(x);
    }
  return sum;
}

void quick_sort(std::vector<std::string> arr,int lower,int upper) {
  std::vector<int> toBeSorted;
  for (std::vector<std::string>::iterator it = arr.begin(); it != arr.end(); ++it) {
    toBeSorted.push_back(convertToASCII(*it));
  }
  // Start at first element
  if(lower < upper) {
    int j = partition(toBeSorted, lower, upper); // Partition should return the new pivot point
    quick_sort(arr, lower, j-1); // Quick sort below the pivot point
    quick_sort(arr, j+1, upper); // And above it
  }
}

