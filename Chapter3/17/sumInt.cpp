#include <iostream>
#include <string>

using namespace std;

void sum (char **argument_vector, int argCount) 
{
    int sum = 0;                            // This will contain the sum
    for (int i = 1; i < argCount; i++)      // Go through all arguments
        sum += stoi(argument_vector[i]);    // and sum them
    
    cout << sum << '\n';                    // Print the sum of all args
}
