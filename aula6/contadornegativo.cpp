#include <iostream>
using namespace std;
main(){
	int total, num, cont_neg = 0;
	
	cout << "insira o total de numeros";
	cin  >> total;
	
	for (int i = 0; i <= total; i++)
	{
		cout << "insira o valor: ";
		cin  >> num;
		
		if (num < 0)
		{
			cont_neg++;
		}
	}
	
	cout << "a quantidade de numeros negativos eh: " << cont_neg;
	
}

