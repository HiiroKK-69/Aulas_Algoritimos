#include <iostream>
using namespace std;
main(){

	int media, idade, soma = 0;
	for (int i = 0; i <20; i++)
	{
		cout << "insira idade do aluno: ";
		cin  >> idade;
		
		soma+= idade;
	}
	media = soma / 20;
	
	cout << "a media da idade dos alunos eh " << media << " anos";
	
}
