#include <iostream>
using namespace std;
main(){
	int idade, soma = 0, cont_idade = 0,cont_altura = 0;
	float altura, media;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "insira a idade: ";
		cin  >> idade;
		cout << "insira altura (insira em cm): ";
		cin  >> altura;
		
		if (altura > 175)
		{
			soma += idade;
			cont_altura ++;
		}
		if (idade  > 25)
		{
			cont_idade ++;
		}
	}
	media = soma / cont_altura;
	
	cout << "a media de idade dos alunos acima de 1.75 eh: " << media << endl;
	cout << "a quantidade de alunos com mais de 25 anos eh: " << cont_idade;
}
