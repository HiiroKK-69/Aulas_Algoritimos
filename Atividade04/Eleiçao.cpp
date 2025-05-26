#include <iostream>
using namespace std;
main(){
    int votos_candidato1 = 0;
    int votos_candidato2 = 0;
    int votos_candidato3 = 0;
    int total_votos = 0;
    int voto;
    
    while(true){
        cout << "Digite o numero do candidato (1, 2, 3) ou 0 para encerrar: ";
        cin >> voto;
        if(voto == 0) break;
        if(voto == 1 || voto == 2 || voto == 3){
            total_votos++;
            if(voto == 1) votos_candidato1++;
            else if(voto == 2) votos_candidato2++;
            else votos_candidato3++;
        }
    }
    
    if(total_votos > 0){
        cout << "Percentual de votos:" << endl;
        cout << "Candidato 1: " << (votos_candidato1 * 100.0 / total_votos) << "%" << endl;
        cout << "Candidato 2: " << (votos_candidato2 * 100.0 / total_votos) << "%" << endl;
        cout << "Candidato 3: " << (votos_candidato3 * 100.0 / total_votos) << "%" << endl;
    }else{
        cout << "Nenhum voto foi registrado." << endl;
    }
}