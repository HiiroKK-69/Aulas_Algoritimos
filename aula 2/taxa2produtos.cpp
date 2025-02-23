#include <iostream>
using namespace std;
main()
{
	float preco[2], variacao;
	
	cout << "insira o preco do dia 17/03: ";
	cin  >> preco[0];
	cout << "insira o preco do dia 18/03: ";
	cin  >> preco[1];
	
	variacao = ((preco[1] - preco[0])/ preco[0] * 100);
	
	cout << "a variacao e de " << variacao << "%";
}
