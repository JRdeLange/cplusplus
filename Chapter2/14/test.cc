#include <iostream>
#include <bitset>
#include <ctype.h>
#include <string>
using namespace std;

int main(int argc, char *argv[]) 
{
	size_t test = 44;
	cout << bitset<8>(test) << '\n';
	for (int i = 0; i < 8; ++i)
	{

		cout << (test & 1);
		test = test >> 1;
	}
	cout << '\n';
	
}