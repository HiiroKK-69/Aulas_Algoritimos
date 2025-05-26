#include <iostream>
using namespace std;
main(){
	int cand1 = 0, cand2 = 0, cand3 = 0;
	int votN = 0,votB = 0, voto = 0;
	int totalVotos = 0;
	
	cout << "============Eleiçoes============\n";
    cout << "Codiguinhos dos candidatos:\n";
    cout << "1 = Hiiro\n2 = Doutor \n3 = Imperador cesar\n";
    cout << "5 = Voto Nulo\n6 = Voto em Branco\n\n";
	
	for (int i = 1; i <= 1; i++){
		cout << "\nEleitor " << i <<", digite o codigo correspondente ao candidato escolhido\n";
		cin >> voto;
		
		switch(voto){
			case 1: cand1 ++; totalVotos ++;  break;
			case 2: cand2 ++; totalVotos ++;  break;
			case 3: cand3 ++; totalVotos ++;  break;
			case 5: votN  ++; totalVotos ++;  break;
			case 6: votB  ++; totalVotos ++;  break;
			default:
				cout << "\nSeu voto e invalido e logo nao sera contabilizado\n";
			break;
		}	
	}
	
	cout << "===============Fim da eleiçao==============" << "\n";
	cout << "Total de votos: " << totalVotos << "\n";
	cout << "\n-------------------------------------------\n";
	cout << "Candidato Hiiro:\n";
	cout << "Total de Votos: " << cand1 <<"\n";
	cout << "Percentual de Votos: " << (cand1 * 100) / totalVotos <<"%\n";
	cout << "-------------------------------------------\n";
	cout << "Candidato Doutor:\n";
	cout << "Total de Votos: " << cand2 <<"\n";
	cout << "Percentual de Votos: " << (cand2 * 100) / totalVotos <<"%\n";
	cout << "-------------------------------------------\n";
	cout << "Candidato Imperador Cesar:\n";
	cout << "Total de Votos: " << cand3 <<"\n";
	cout << "Percentual de Votos: " << (cand3 * 100) / totalVotos <<"%\n";
	cout << "-------------------------------------------\n";
	cout << "Votos Nulos:\n";
	cout << "Total de Votos: " << votN <<"\n";
	cout << "Percentual de Votos: " << (votN * 100) / totalVotos <<"%\n";
	cout << "-------------------------------------------\n";
	cout << "Votos em Branco:\n";
	cout << "Total de Votos: " << votB <<"\n";
	cout << "Percentual de Votos: " << (votB * 100) / totalVotos <<"%\n";
	cout << "-------------------------------------------\n";
	
	cout << "+++++++++++++++++VENCEDOR++++++++++++++++++\n";
	    if (cand1 > cand2 && cand1 > cand3) {
        cout << "                  HIIRO\n";
    	} else if (cand2 > cand1 && cand2 > cand3) {
        cout << "                  Doutor\n";
    	} else if (cand3 > cand1 && cand3 > cand2) {
        cout << "              Imperador Cesar\n";
    	} else {
        cout << "          Empate entre candidatos.\n";
    	}
	cout << "-------------------------------------------\n";
	cout << "===========================================";
	
	
	
}

