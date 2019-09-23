#include <stdlib>

using namespace std;

double sum (char **argument_vector, int argCount) {
  double sum = 0.0f;
  for(int i = 1; i < argCount; i++) {
    sum += strtoI(argument_vector[i]);
  }
  return sum;
}
