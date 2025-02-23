#include <iostream>
using namespace std;
main()
{
	string nome;
	float precouni, comi;
	int qtde;
	
	cout << "informe seu nome: ";
	cin  >> nome;
	cout << "informe preço do produto: ";
	cin  >> precouni;
	cout << "informe quantidade de produtos: ";
	cin  >> qtde;
	
	comi = precouni * qtde * 0.05;
	
	cout << "parabens " << nome << endl;
	cout << "sua comissao sera: " << comi;
	
	
	
	
	
}
