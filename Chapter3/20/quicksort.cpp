#include <string>

#include "main.h"

void quick_sort(std::string arr[],int lower,int upper) {
  // Start at first element
  if(lower < upper) {
    int j = partition(arr, lower, upper); // Partition should return the new pivot point
    quick_sort(arr, lower, j-1); // Quick sort below the pivot point
    quick_sort(arr, j+1, upper); // And above it
  }
}

