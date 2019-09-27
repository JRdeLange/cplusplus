#include <iostream>
#include <string>
#include "main.h"

using namespace std;

int main(int argc, char *argv[]) 
{

    for (int idx = 1; idx < argc; idx++)        // Go trough all arguments except
    {                                           // the program call
        string entry = argv[idx];               // Convert to string to use find()
                                                // Check for dots
        bool dotFound = (entry.find(".") != string::npos);
        if (dotFound)                           // If there is a dot
        { 
            sum(argv, argc, dotFound);          // Sum with double values
            return 0;                           // Quit the program
        }
    }
    sum(argv, argc);                            // No doubles, so sum ints
}
