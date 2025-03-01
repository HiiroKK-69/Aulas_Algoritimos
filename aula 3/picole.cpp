#include <iostream>
using namespace std;
main()
{
	//variaveis(usando vetor por preguiça de fazer 3 variaveis)
	int qtd[3], qtdf;
	float total;
	
	//entrada
	cout << "informe o total vendido de cada picole\n";
	cout << "--------------------------------------";
	cout <<"\npicole de tang: ";
	cin  >>qtd[0];
	cout <<"picole de morango cremoso: ";
	cin  >>qtd[1];
	cout <<"picole magnum do balaco baco: ";
	cin  >>qtd[2];
	
	//processo
	
	qtdf = qtd[0] + qtd[1] + qtd[2];
	total = (qtd[0] * 0.50) + (qtd[1] * 0.60) + (qtd[2] * 0.75);
	
	//saida
	cout <<"\n===============================================";
	cout << "\ntotal de picoles vendidos:.............." << qtdf;
	cout << "\ntotal arrecadado:......................." << total;
	cout <<"\n===============================================";
	
	
	
}

