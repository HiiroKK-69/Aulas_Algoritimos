#include <iostream>
using namespace std;
main()
{
	setlocale (LC_ALL, "Portuguese");
	
	int n1;
	int n2;
	int op;
	
	
	cout << "bem vindo ao calculador de media de retangulos";
	cout << endl;
	cout << "qual o tipo de medida deseja?";
	cout << endl;
	cout << "1-km, 2-m, 3-cm: ";
	cin  >> op;
	
	if (op == 1)
	{
		cout << "insira a base de seu retangulo: ";
		cin  >> n1;
		cout << endl;
		cout << "insira o valor da altura do retangulo: ";
		cin  >> n2;
		cout << endl;	
		cout << "a area do seu retangulo �: ";
		cout << n1 * n2 <<"�Km";
	} 
	else if (op == 2)
	{
		cout << "insira a base de seu retangulo: ";
		cin  >> n1;
		cout << endl;
		cout << "insira o valor da altura do retangulo: ";
		cin  >> n2;
		cout << endl;	
		cout << "a area do seu retangulo �: ";
		cout << n1 * n2 <<"�m";	
	}
	else if (op == 3)
	{
		cout << "insira a base de seu retangulo: ";
		cin  >> n1;
		cout << endl;
		cout << "insira o valor da altura do retangulo: ";
		cin  >> n2;
		cout << endl;	
		cout << "a area do seu retangulo �: ";
		cout << n1 * n2 <<"�Cm";
	}else
	{
		cout << "nao tem essa op�ao mano";
	}
	
	
}
