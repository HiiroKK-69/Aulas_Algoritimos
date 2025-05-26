#include <iostream>
using namespace std;
main(){
    int numero;
    float kwh;
    int tipo;
    float custo;
    float total_residencial = 0;
    float total_comercial = 0;
    float total_industrial = 0;
    float consumo_residencial = 0;
    float consumo_comercial = 0;
    float consumo_industrial = 0;
    
    while(true){
        cout << "Digite o numero do consumidor (0 para encerrar): ";
        cin >> numero;
        if(numero == 0) break;
        cout << "Digite a quantidade de kWh consumidos: ";
        cin >> kwh;
        cout << "Digite o tipo (1-residencial, 2-comercial, 3-industrial): ";
        cin >> tipo;
        
        if(tipo == 1){
            custo = kwh * 0.3;
            consumo_residencial += kwh;
            total_residencial += custo;
        }else if(tipo == 2){
            custo = kwh * 0.5;
            consumo_comercial += kwh;
            total_comercial += custo;
        }else if(tipo == 3){
            custo = kwh * 0.7;
            consumo_industrial += kwh;
            total_industrial += custo;
        }
        
        cout << "Custo total para este consumidor: R$" << custo << endl;
    }
    
    cout << "Total de consumo residencial: " << consumo_residencial << " kWh" << endl;
    cout << "Total de consumo comercial: " << consumo_comercial << " kWh" << endl;
    cout << "Total de consumo industrial: " << consumo_industrial << " kWh" << endl;
    
    if(consumo_residencial > consumo_comercial && consumo_residencial > consumo_industrial){
        cout << "Categoria que mais consome: Residencial" << endl;
    }else if(consumo_comercial > consumo_residencial && consumo_comercial > consumo_industrial){
        cout << "Categoria que mais consome: Comercial" << endl;
    }else if(consumo_industrial > consumo_residencial && consumo_industrial > consumo_comercial){
        cout << "Categoria que mais consome: Industrial" << endl;
    }else{
        cout << "Houve empate entre categorias no consumo" << endl;
    }
}