#include <iostream>
using namespace std;
main(){
	string nome,nomeAlto,nomeMaisnovo;
	int idade,maisNovo = 99;
	int contAltos = 0,cont35Mais = 0;
	float altura, somaIdade, maiorAltura = 0,mediaAltos;
	
	for (int i = 0; i <= 3; i++){
		cout << "\nPessoas numero" << i;
		
		cout << "\ninsira o nome: ";
		cin >> nome;
		
		cout << "\ninsira a sua idade: ";
		cin >> idade;
		
		cout << "\ninsira a altura: ";
		cin >> altura;
		if (altura > 1.80){
			somaIdade +=idade;
			contAltos ++;
		}
		if (idade > 35){
			cont35Mais ++;
		}
		if (altura > maiorAltura){
			maiorAltura = altura;
			nomeAlto = nome;
		}
		if (idade < maisNovo){
			maisNovo = idade;
			nomeMaisnovo = nome;
		}
     cout << "---------------------------\n";
    }

    if (contAltos > 0) {
        float mediaAltos = somaIdade / contAltos;
        cout << "Media de idade das pessoas com mais de 1,80m: " << mediaAltos << "\n";
    } else {
        cout << "Nenhuma pessoa com mais de 1,80m de altura.\n";
    }

    cout << "Total de pessoas com mais de 35 anos: " << cont35Mais << "\n";

    cout << "Pessoa mais alta: " << nomeAlto << " (" << maiorAltura << " m)\n";

    cout << "Pessoa mais nova: " << nomeMaisnovo << " (" << maisNovo << " anos)\n";

}




