#include <iostream>
using namespace std;
main()
{
	//variaveis	
 	float valorInicial, valorFinal = 0;
    char vidroEletrico, arCondicionado, travaAlarme, pinturaMet, direcaoHid, pagamentoVista;

    // entrada
    cout << "Digite o valor inicial do carro: R$ ";
    cin >> valorInicial;


    cout << "O carro possui vidro el�trico? (s/n): ";
    cin >> vidroEletrico;
    cout << "O carro possui ar condicionado? (s/n): ";
    cin >> arCondicionado;
    cout << "O carro possui trava central e alarme? (s/n): ";
    cin >> travaAlarme;
    cout << "O carro possui pintura met�lica? (s/n): ";
    cin >> pinturaMet;
    cout << "O carro possui dire��o hidr�ulica? (s/n): ";
    cin >> direcaoHid;

	
	//processo
	 valorFinal = valorInicial;
    if (vidroEletrico == 's' || vidroEletrico == 'S') {
        valorFinal += 500;
    }
    if (arCondicionado == 's' || arCondicionado == 'S') {
        valorFinal += 2000;
    }
    if (travaAlarme == 's' || travaAlarme == 'S') {
        valorFinal += 500;
    }
    if (pinturaMet == 's' || pinturaMet == 'S') {
        valorFinal += 1000;
    }
    if (direcaoHid == 's' || direcaoHid == 'S') {
        valorFinal += 2500;
    }
	
	//saida
	
	cout << "Deseja pagar � vista? (s/n): ";
    cin >> pagamentoVista;

    if (pagamentoVista == 's' || pagamentoVista == 'S') {
        valorFinal *= 0.95; 
    }

    cout << "O valor final do carro �: R$ " << valorFinal << endl;

	
	
}
