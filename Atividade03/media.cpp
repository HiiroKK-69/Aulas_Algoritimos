#include <iostream>
using namespace std;
main(){
	
		string nome;
		float nota, media, tNotas, cont_zerados = 0;
		
		for (int i = 1; i <= 20; i++){
		cout << "\nAluno numero" << i;
		
		cout << "\ninsira o nome:\n";
		cin >> nome;
		cout << "\ninsira a nota:\n";
		cin >> nota;
		
		tNotas += nota;
		
		if (nota == 0){
			cont_zerados ++;
		}
	}
	
	media = tNotas / 20;
	
	cout << "\nMedia de notas " << media;
	cout << "\nNumero de alunos com nota zero " << cont_zerados;
}
