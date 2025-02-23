#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int r;
	int op;
	
	cout << "bem vindo ao calculador de areas de circulo";
	cout << endl;
	cout << "escolha o tipo de metragem desejada";
	cout << endl;
	cout << "1-km, 2-m, 3-cm: ";
	cin  >> op;
	
	if (op == 1)
	{
	
		cout << "insira o raio do circulo";
		cin  >> r;
		cout << "a area do seu circulo é: " << 3.14 * (r * r) << "Km";
	
	}
	else if (op == 2)
	{
		cout << "insira o raio do circulo";
		cin  >> r;
		cout << "a area do seu circulo é: " << 3.14 * (r * r) << "m";
	}
	else if (op == 3)
	{
		cout << "insira o raio do circulo";
		cin  >> r;
		cout << "a area do seu circulo é: " << 3.14 * (r * r) << "Cm";
	}else 
	{
		cout << "nao tem essa opçao meu mano";
	}
	
	
	
}
