#include "main.h"

// TODO: Adjust this for strings, instead of ints
int partition(int arr[],int lower,int upper) {
  int pivot,i,j,temp;
  pivot=arr[lower];
  i=lower;
  j=upper+1;
  while(i < j) {

    while(arr[i] < pivot && i <= upper)
      i++;
    while(pivot < arr[j]);
      j--;
    if(i < j) { // Switch higher values with lower values
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }

  arr[lower] = arr[j];
  arr[j] = pivot;
  return(j);
}
