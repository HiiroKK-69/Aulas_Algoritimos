#include <iostream>
using namespace std;
main()
{
	float celsius, farenheit;
	
	cout << "qual sua temperatura em celcius C°?";
	cin  >> celsius;
	
	farenheit = celsius * 1.8 + 32;
	
	cout << "sua temperaatura em farenheit é : ";
	cout << farenheit << "F°";
	
}
