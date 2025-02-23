#include <iostream>
using namespace std;
main ( )
{
	string nome [3];
	float  preco[3], desconto[3], precof [3], precofd;
	

	cout << "insira o nome do primeiro artigo: ";
	cin  >> nome[0];
	cout << "insira o preco do primeiro artigo: ";
	cin  >> preco[0];
	cout << "insira o desconto do primeiro artigo: ";
	cin  >> desconto[0];
	cout << "--------------------------------------" << endl;
	
	cout << "insira o nome do segundo artigo" << ;
	cin  >> nome[1];
	cout << "insira o preco do segundo artigo" << ;
	cin  >> preco[1];
	cout << "insira o desconto do segundo artigo " << ;
	cin  >> desconto[1];
	cout << "--------------------------------------" << endl;

	
	cout << "insira o nome do ultimo artigo" << ;
	cin  >> nome[2];
	cout << "insira o preco do ultimo artigo" << ;
	cin  >> preco[2];
	cout << "insira o desconto do ultimo artigo " <<;
	cin  >> desconto[2];
	cout << "--------------------------------------" << endl;


	    
	cout << "por fim vamos ver os resultados" << endl << endl;
	    
	precof[0] = preco[0] - (preco[0] * desconto[0] / 100);
	precof[1] = preco[1] - (preco[1] * desconto[1] / 100);
	precof[2] = preco[2] - (preco[2] * desconto[2] / 100);
	    
	cout << "O item "<< nome[0] << " custa  " << preco[0] << "R$ \ne com o desconto de " << desconto[0] << "%" << endl;
	cout << "saira pela bagatela de " << precof[0] <<"R$" << endl;
	
	cout << "===================================================" << endl;
	
	cout << "O item "<< nome[1] << " custa  " << preco[1] << "R$ \ncom o desconto de " << desconto[1] << "%" << endl;
	cout << "saira pela bagatela de " << precof[1] <<"R$" << endl;
	
	cout << "===================================================" << endl;
	
	cout << "O item "<< nome[2] << " custa  " << preco[2] << "R$ \ncom o desconto de " << desconto[2] << "%" << endl;
	cout << "saira pela bagatela de " << precof[2] <<"R$" << endl;
	
	cout << "===================================================" << endl;
	
	precofd = precof[0] + precof[1] + precof[2];
	
	cout << "bem no fim sua compra saira por apenas "<< precofd <<"\n Obrigado e volte sempre";
	
	
	
	
	    
	    
	    
	    
	return 0;
	}
