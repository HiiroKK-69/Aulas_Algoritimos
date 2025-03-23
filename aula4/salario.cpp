#include <iostream>
using namespace std;
main()
{
	float vendas, salario;
	
	cout << "informe o valor de vendas: ";
	cin  >> vendas;
	
	if (vendas > 20000)
	{
		salario = vendas * 0.1;
		cout << "salario do vendedor é " << salario << "R$";
	} 
	else {
		salario = vendas * 0.1;	
		cout << "salario do vendedor é " <<  salario << "R$";
	}
}
