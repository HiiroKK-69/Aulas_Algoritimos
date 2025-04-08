#include <iostream>
using namespace std;
main(){
	int valor, comp = 99999, menor;
	
	for (int i = 0; i <10; i++)
	{
		cout << "insira um valor: ";
		cin >> valor;
		
		if (valor < comp)
		{
			menor = valor;
		}
	}
	
	cout << "o menor valor eh: "<< menor;
	
}
