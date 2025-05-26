#include <iostream>
using namespace std;
main(){
    string nome_mais_velho;
    int idade_mais_velho = 0;
    string nome;
    int idade;
    
    while(true){
        cout << "Digite o nome do aluno: ";
        cin >> nome;
        cout << "Digite a idade do aluno (0 para encerrar): ";
        cin >> idade;
        if(idade == 0) break;
        if(idade > idade_mais_velho){
            idade_mais_velho = idade;
            nome_mais_velho = nome;
        }
    }
    
    if(nome_mais_velho != ""){
        cout << "O aluno mais velho e " << nome_mais_velho << " com " << idade_mais_velho << " anos." << endl;
    }else{
        cout << "Nenhum aluno foi registrado." << endl;
    }
}