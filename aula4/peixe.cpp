#include <iostream>
using namespace std;
main()
{
	int peso, final;
	
	cout << "insira numero de kilos de peixe: ";
	cin  >> peso;
	
	if (peso >= 50)
	{
		final = (peso - 50) *  4;
	
		cout << "a multa sera de " << final << "R$";
	}
	else{
		cout <<"no multas";
	}
}
