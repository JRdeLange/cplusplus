#include "main.h"

int partition(int a[],int lower,int upper) {
  int pivot,i,j,temp;
  pivot=a[lower];
  i=lower;
  j=upper+1;
  do {

    while(a[i] < pivot && i <= upper)
      i++;
    while(pivot < a[j]);
      j--;
    if(i < j) { // Switch higher values with lower values
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  } while(i < j);

  a[lower]=a[j];
  a[j]=pivot;
  return(j);
}
