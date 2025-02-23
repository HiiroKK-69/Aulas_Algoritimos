#include <iostream>
using namespace std;
main()
{
	float altura, largura, comprimento, totalbar;
	float alturaf, larguraf, comprimentof;	
	int amarras = 30;
	
	cout <<"insira o valor da altura em cm: " ;
	cin  >> altura;
	cout <<"insira o valor da largura em cm: " ;
	cin  >> largura;
	cout <<"insira o valor da comprimento em cm: " ;
	cin  >> comprimento;
	
	alturaf = 2 * (altura + comprimento);
	larguraf = 2 * (largura + altura);
    comprimentof = 2 * (comprimento + largura);
    
    totalbar  =(alturaf + larguraf + comprimentof) * 3 + amarras;
    
    cout << "o total de barbante necessario para seu pacote sera de:" << totalbar << "cm";
	
}
