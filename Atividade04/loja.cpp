#include <iostream>
using namespace std;
main(){
    string produto_mais_barato;
    float preco_mais_barato = 999999;
    string produto_mais_vendido;
    int quantidade_mais_vendida = 0;
    float soma_precos = 0;
    int quantidade_produtos = 0;
    
    string nome;
    float preco;
    int quantidade;
    
    while(true){
        cout << "Digite o nome do produto ou 'fim' para encerrar: ";
        cin >> nome;
        if(nome == "fim") break;
        cout << "Digite o preco unitario: ";
        cin >> preco;
        cout << "Digite a quantidade vendida: ";
        cin >> quantidade;
        
        if(preco < preco_mais_barato){
            preco_mais_barato = preco;
            produto_mais_barato = nome;
        }
        
        if(quantidade > quantidade_mais_vendida){
            quantidade_mais_vendida = quantidade;
            produto_mais_vendido = nome;
        }
        
        soma_precos += preco;
        quantidade_produtos++;
    }
    
    if(quantidade_produtos > 0){
        cout << "Produto mais barato: " << produto_mais_barato << " - R$" << preco_mais_barato << endl;
        cout << "Produto mais vendido: " << produto_mais_vendido << " - " << quantidade_mais_vendida << " unidades" << endl;
        cout << "Media de preco dos produtos: R$" << (soma_precos / quantidade_produtos) << endl;
    }else{
        cout << "Nenhum produto foi registrado." << endl;
    }
}