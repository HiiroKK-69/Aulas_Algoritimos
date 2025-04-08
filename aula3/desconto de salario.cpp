#include <iostream>
using namespace std;
main()
{
	//variaveis
	string nome;
	float salariobt, salarioliq, previdencia, imposto, desconto;
	//causando deepressao no funcionario(pedindo informaçoes para fazes dencontos salariais)
	cout << "Olá funcionario da Pica Pau Ltda.\n";
	cout << "seja bem vindo ao calculador de quao pouco vc ira receber\n";
	cout << "Por favor se identifique: ";
	cin  >> nome;
	cout << "insira o valor de seu salario bruto: ";
	cin  >> salariobt;
	
	//precesso
	previdencia = salariobt * 0.10;
	imposto = (salariobt - previdencia) * 0.25;
	desconto = previdencia + imposto;
	salarioliq = salariobt - desconto;
	
	//dando a noticia ruim ao funncionario(saida)
	cout << "=========================================\n";
	cout << "Funcionario......................" << nome << "\n";
	cout << "Salario Bruto...................." << salariobt << "R$\n";
	cout << "Desconto da previdencia.........." << previdencia << "R$\n";
	cout << "Desconto do imposto de renda....." << imposto << "R$\n";;
	cout << "Salario Final...................." << salarioliq << "R$\n";;
	cout << "=========================================\n";
	
}
