#include <iostream>
using namespace std;
main(){
	string nome;
	float nota;
	
	for (int i = 0; i < 39; i++)
	{
		cout << "insira o nome: ";
		cin  >> nome;
		cout << "insira o nota: ";
		cin  >> nota;
		
		if (nota >= 7 && nota <=10)
		{
			cout << "\nAluno " << nome << " aprovado\n\n";
		}else if (nota < 7 && nota > 0)
		{
			cout << "\nAluno " << nome << "reprovado\n\n";
		}else if (nota < 0 || nota > 10)
		{
			cout << "Nota invalida\n\n";
		}
		
	}
}

