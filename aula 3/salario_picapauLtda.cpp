#include <iostream>
using namespace std;
main()
{
	//variaveis
	int qtdcarros;
	float salario, comissao, totalvendas;
	string nome;
	
	//entrada
	cout << "Bem vindo ao sistema de contagem de salario da Pica Pau Ltda.\n";
	cout << "Por favor Informe o nome do vendedor: ";
	cin  >> nome;
	cout << "Informe a quantidade de carros vendidos " << nome <<": ";
	cin  >> qtdcarros;
	cout << "Informe o total de vendas: ";
	cin  >> totalvendas;
	
	//processo
	comissao = totalvendas * 0.05;
	salario  = 350 + (qtdcarros * 50) + comissao;
	
	//saida
	cout << "\n===============================================";
	cout << "\nVendedor:............................ " << nome;
	cout << "\nQuantidade de carros vendidos:....... " << qtdcarros;
	cout << "\nTotal em vendas:..................... " << totalvendas << "R$";
	cout << "\nSalario Final:....................... " << salario << "R$";
	cout << "\n===============================================";
	

	
	
}
