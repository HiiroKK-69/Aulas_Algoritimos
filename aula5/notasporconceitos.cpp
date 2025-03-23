#include <iostream>
using namespace std;
main()
{
	//variaveis
	string nome;
	int nota;
	char conceito;
	
	//entrada
	cout << "insira nome por favor: ";
	cin  >> nome;
	
	cout << "insira nota: ";
	cin  >> nota;
	
	//processo
	if (nota <= 39)
	{
		conceito = 'E';
	}
	else if (nota >= 40 && nota <= 59)
	{
		conceito = 'D';
	}
	else if (nota >= 60 && nota <= 75)
	{
		conceito = 'C';
	}
	else if (nota >= 76 && nota <= 89)
	{
		conceito = 'B';
	}
	else if (nota >= 90)
	{
		conceito = 'A';
	}
	
	
	
	//saiida

	if (nota < 0 )
	{
		cout << "Nota invalida";
	}
	else 
	{
	cout << nome <<" Sua nota eh: " << nota << "\n";
	cout << "Com isso seu conceito eh: " << conceito;
	}
	
	
	
	
	
	
	
}
