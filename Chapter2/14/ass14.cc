#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

int main(int argc, char *argv[]) 
{
	argv++;
	int pattern[argc];
	
	for (auto &el: pattern)
		el = 0;


	size_t loop;
	loop = 0;
	while (pattern[argc-1] == 0)
	{
		cout << ++loop << ": ";

		for (int idx = 0; idx < argc; ++idx)
			if (pattern[idx] == 1)
				cout << argv[idx] << " ";

		cout << "\n";

		size_t idx = 0;					
		while(true){
			if (pattern[idx] == 0)
			{
				pattern[idx] = 1;
				for (size_t beforeIdx = 0; beforeIdx < idx; ++beforeIdx)
					pattern[beforeIdx] = 0;
				break;
			}
			++idx;
		}
		
		
	}
	
}