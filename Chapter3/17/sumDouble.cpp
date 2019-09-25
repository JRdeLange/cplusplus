#include <iostream>
#include <string>

using namespace std;

void sum (char **argument_vector, int argCount, bool dotFound) 
{
    double sum = 0;                         // This will contain the sum
    for (int i = 1; i < argCount; i++)      // Go through all arguments
        sum += stod(argument_vector[i]);    // and sum them

    cout << sum << '\n';                    // Print the sum of all args
}
