#include <iostream>
using namespace std;
main(){
	string nome[100], tipoEscrito[100];
	int ano[100], tipo[100], total = 0;
	float preco[100];
	
	cout << "Cadastro de livros (Digite 'FIM' no nome para parar):\n";
	cout << "\n+++++++++++++++++++++++++++++++++++";
	
	while(true){
		cout << "\nInsira Nome: ";
		cin  >> nome[total];
		
		if (nome[total] == "FIM") break;
		
		cout << "Insira ano de publicacao: ";
		cin  >> ano[total];
		
		cout << "insira o tipo do documento( 1 - livro e 2 - revista): ";
		cin  >> tipo[total];
		if (tipo[total] == 1){
			tipoEscrito[total] = "Livro";
		}else if(tipo[total] == 2){
			tipoEscrito[total] = "Revista";
		}else{
			tipoEscrito[total] = "Indefinido";
		}
		
		cout << "insira preço do documento: ";
		cin  >> preco[total];
		cout << "\n+++++++++++++++++++++++++++++++++++";
		
		total ++;
	}
	
	//A)media de valores dos livros
	float somaPreco = 0, mediaPreco = 0;
	int contP = 1;
	for (int i = 0; i < total; i++)
	{
		somaPreco += preco[i];
		mediaPreco = somaPreco / contP;
		contP ++;
	}
	cout << "=============================================";
	cout << "\na)a media de preco dos documentos eh: " << mediaPreco; 
	
	//B)ver se tem algoritimos oara experts OOOOOOOOOOOOOOOOOOOOOOOmaga
		for (int i = 0; i < total; i++)
	{
		if (nome[i] == "AlgoritmosparaExperts" || nome[i] == "algoritimos"){
			cout << "\nb) Para voce ai que e expert em algoritimos, nos temos 'Algoritmos para experts'";
			break;
		}
	}
	//C) media de idade de livro e tipo com maior media
	float somaL = 0, somaR = 0;
	float mediaL = 0, mediaR = 0;
	int contL = 0, contR =0;
	int idadeL = 0, idadeR = 0;
	
	for (int i = 0; i < total; i++)
	{
		switch(tipo[i]){
			case 1:
				idadeL = 2025 - ano[i];
				somaL += idadeL;
				contL ++;
			break;
			case 2:
				idadeR = 2025 - ano[i];
				somaR += idadeR;
				contR ++;
			break;
		}
	}

	if (contL != 0){
		mediaL = somaL / contL;
	}
	if (contR != 0){
		mediaR = somaR / contR;
	}
	
	if (mediaL > mediaR){
		cout << "\nc) A maior media de idade pertence aos Livros, e sua media de idade eh: " << mediaL;
	}else if (mediaR > mediaL){
		cout << "\nc) A maior media de idade pertence as Resvistas, e sua media de idade eh: " << mediaR;
	}
	//D)item mais caro e mais barato
	int posCaro = 0, posBarato = 0;
	for (int i = 1; i < total; i++){
		if (preco[i] > preco[posCaro]){
			posCaro = i;
		}
		if (preco[i] < preco[posBarato]){
			posBarato = i;
		}
	}
	cout << "\n==========================================";
	cout << "\nd) mais caro e mais barato";
	cout << "\nNome                   : " << nome[posCaro];
	cout << "\n Ano de publicacao     : " << ano[posCaro];
	cout << "\n Tipo do documento     : " << tipoEscrito[posCaro];
	cout << "\n Preco                 : " << preco[posCaro];
	cout << "\n-------------------------------------------";
	cout << "\nNome                   : " << nome[posBarato];
	cout << "\n Ano de publicacao     : " << ano[posBarato];
	cout << "\n Tipo de documento     : " << tipoEscrito[posBarato];
	cout << "\n Preco                 : " << preco[posBarato];
	
	//informaçoes do mais recente
	int posRecente = 0;
	for (int i = 0; i < total; i++){
		if (ano[i] > ano[posRecente]){
			posRecente = i;
		}
	}
	cout << "\n====================================";
	cout << "\ne) Mais recente:";
	cout << "\n Nome                  : " << nome[posRecente];
	cout << "\n Preco                 : " << preco[posRecente];
	cout << "\n Tipo do documento     : " << tipoEscrito[posRecente];
	cout << "\n====================================";
	cout << "\nAcabou";
	
}
