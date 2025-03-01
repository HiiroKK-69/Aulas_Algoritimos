#include <iostream>
using namespace std;
main()
{
	//variaveis
	float cotacao_dolar, dolar, real;
	
	//processo
	cout << "informe o valor atual do dolar: ";
	cin  >> cotacao_dolar;
	
	cout << "informe o valor em dolares: ";
	cin  >> dolar;
	
	real = dolar * cotacao_dolar;
	
	//saida
	cout << "\nseu valor em reais eh: " << real << "R$";
}
