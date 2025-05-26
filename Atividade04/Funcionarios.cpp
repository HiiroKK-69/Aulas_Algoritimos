#include <iostream>
using namespace std;
main(){
    char sexo;
    string nome;
    float salario;
    float soma_salarios_m = 0;
    int qtd_m = 0;
    float soma_salarios_f = 0;
    int qtd_f = 0;
    
    while(true){
        cout << "Digite o sexo (M/F/X para encerrar): ";
        cin >> sexo;
        if(sexo == 'X') break;
        cout << "Digite o nome: ";
        cin >> nome;
        cout << "Digite o salario: ";
        cin >> salario;
        
        if(sexo == 'M'){
            soma_salarios_m += salario;
            qtd_m++;
        }else if(sexo == 'F'){
            soma_salarios_f += salario;
            qtd_f++;
        }
    }
    
    float media_m = qtd_m > 0 ? soma_salarios_m / qtd_m : 0;
    float media_f = qtd_f > 0 ? soma_salarios_f / qtd_f : 0;
    
    if(qtd_m > 0 || qtd_f > 0){
        if(media_m > media_f){
            cout << "Sexo masculino possui maior media salarial: R$" << media_m << endl;
        }else if(media_f > media_m){
            cout << "Sexo feminino possui maior media salarial: R$" << media_f << endl;
        }else{
            cout << "Ambos sexos possuem a mesma media salarial: R$" << media_m << endl;
        }
    }else{
        cout << "Nenhum funcionario foi registrado." << endl;
    }
}