#include <iostream>
using namespace std;

int main()
{
	int value;
	cin >> value;

	cout << (value % 2 ? "odd" : "even") << '\n';
	/*Dividing an odd number by 2 results in a modulus of 1*/

	cout << (value / 2 * 2 == value ? "even" : "odd") << '\n';
	/*Becouse integers have to be whole numbers, an odd number divided by 
	2 will be rounded. This means that */			

	cout << (value & 1 ? "odd" : "even") << '\n';				
	/*By using the Bitwise AND over value and 1, we are checking whether value in 
	binairy starts with a 1. If so then value has to be odd*/

	cout << ((value >> 1) << 1 == value ? "even" : "odd") << '\n';		
	/*By first shifting the bits to the right and then to the left, the last bit 
	will be changed to a zero. If we then compare this new value to the input we 
	can determine whether the input is odd or even.*/

	cout << ((value | 1) == value ? "odd" : "even") << '\n';
	/*By using the Bitwise inclusive OR with value and 1 will return value if 
	value is odd. However when value is even its first zero will be changed to
	 a 1 resulting in a hight number.*/

	cout << (~(value ^ 1) == -value ? "odd" : "even") << '\n';
	/*By using the bitwise compliment and the bitwise XOR, we create a bitwise 
	XNOR. This results in even numbers becoming their negative minus two while 
	odd numbers will just become negative.*/
}