#include <iostream>
using namespace std;
main()
{
	//variaveis
	string nome;
	int dias;
	float diaria;
	
	//entrada
	cout << "insira nome por favor: ";
	cin  >> nome;
	
	cout << "insira numero de dias hospedado: ";
	cin  >> dias;
	
	//processo
	
	if (dias < 5)
	{
		diaria = dias * 69;
	} 
	else if (dias == 5)
	{
		diaria = dias * 67;
	}
	else if (dias > 5)
	{
		diaria = dias * 65.5;
	}
	
	//saida
	
	if (dias <= 0)
	{
		cout << "nuemro invalido";
	}
	else 
	{
		cout << "Ola" << nome << "obrigado por se hospedar nem nosso hotel.\n";
		cout << "Sua diaria sera de " << diaria << "R$";
	}
	
	
	
	
	
	
	
	
	
}
