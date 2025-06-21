#include <iostream>
using namespace std;
main(){
    float soma_notas = 0;
    int quantidade_alunos = 0;
    string nome;
    float nota;
    
    for(int i = 0; i < 15; i++){
        cout << "Digite o nome do aluno ou 'fim' para encerrar: ";
        cin >> nome;
        if(nome == "fim") break;
        cout << "Digite a nota do aluno: ";
        cin >> nota;
        soma_notas += nota;
        quantidade_alunos++;
    }
    
    if(quantidade_alunos > 0){
        float media = soma_notas / quantidade_alunos;
        cout << "A media das notas da turma e: " << media << endl;
    }else{
        cout << "Nenhum aluno foi registrado." << endl;
    }
}