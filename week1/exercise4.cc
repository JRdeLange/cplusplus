#include <iostream>
using namespace std;

namespace {

//Define RSL with a delimiter because )" is present in the string
char const *rawStringLiteral =
R"delimiter(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)delimiter";

}

int main() 
{
    cout << rawStringLiteral;		//outputs the raw string literal		
}