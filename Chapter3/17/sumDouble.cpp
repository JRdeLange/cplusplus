#include <stdlib>

using namespace std;

double sum (char **argument_vector, int argCount, int found) {
  double sum = 0.0f;
  for(int i = 1; i < argCount; i++) {
    sum += strtoD(argument_vector[i]);
  }
  return sum;
}
