#include <iostream>
using namespace std;
main(){
	int total;
	string nome[100],sexoEscrito[100];
	int idade [100], sexo[100];
	float nota[100];
	
	cout << "Cadastro de Alunos (Digite 'FIM' no nome para parar):\n";
	cout << "\n+++++++++++++++++++++++++++++++++++";
	while (true)
	{
		cout << "\nInsira Nome: ";
		cin  >> nome[total];
		
		if (nome[total] == "FIM") break;
		
		cout << "Insira idade: ";
		cin  >> idade[total];
		
		cout << "insira sexo ( 1-masc ou  2-fem, para nao identificar genero coloque qualquer outro numero): ";
		cin  >> sexo[total];
		if (sexo[total] == 1){
			sexoEscrito[total] = "Masculino";
		}else if(sexo[total] == 2){
			sexoEscrito[total] = "Feminino";
		}else{
			sexoEscrito[total] = "Indefinido"
		}
		
		cout << "insira nota do aluno: ";
		cin  >> nota[total];
		cout << "\n+++++++++++++++++++++++++++++++++++";
		
		total ++;
	}
	
	//a) faixa etaria;
	int menor = idade[0], maior = idade[0];
	for (int i = 1; i < total; i++){
		if (idade[i] < menor){
			menor = idade[i];
		}
		if (idade[i] > maior){
			maior = idade[i];
		}
	}
	cout << "\n====================================";
	cout << "\na)A faixa etaria da turma eh:" << menor << " - " << maior;
	//b) verificando ZE
	for (int i = 0; i < total; i++)
	{
		if (nome[i] == "Ze" || nome[i] == "ze"){
			cout << "\n====================================";
			cout << "\nb)Um abraçao do gattino Ze";
			break;
		}
	}
	
	//c)media de sexos;
	float somaF = 0, somaM = 0;
	int contF = 0, contM =0;
	
	for (int i = 0; i < total; i++)
	{
		switch(sexo[i]){
			case 1:
				somaM += nota[i];
				contM ++;
			break;
			case 2:
				somaF += nota[i];
				contF ++;
			break;
		}
	}
	float mediaM = 0, mediaF = 0;
	if (contM != 0){
		mediaM = somaM / contM;
	}
	if (contF != 0){
		mediaF = somaF / contF;
	}
	cout << "\n====================================";
	cout << "\nc) media de notas de Homens e mulheres";
	cout << "\nMedia dos Homens: " << mediaM;
	cout << "\nMedias das mulheres: " << mediaF;
	
	//d)dados do mais velho e mais novo
	int posVel = 0, posNov = 0;
	for (int i = 1; i < total; i++){
		if (idade[i] > idade[posVel]){
			posVel = i;
		}
		if (idade[i] < idade[posNov]){
			posNov = i;
		}
	}
	cout << "\n====================================";
	cout << "\nd) mais velho e mais novo";
	cout << "\nMais velho: " << nome[posVel];
	cout << "\n Idade    : " << idade[posVel];
	cout << "\n Sexo     : " << sexoEscrito[posVel];
	cout << "\n Nota     : " << nota[posVel];
	cout << "\n------------------------------------";
	cout << "\nMais novo : " << nome[posNov];
	cout << "\n Idade    : " << idade[posNov];
	cout << "\n Sexo     : " << sexoEscrito[posNov];
	cout << "\n Nota     : " << nota[posNov];
	//e)melhor aluno
	int posMelhor = 0;
	for (int i = 0; i < total; i++){
		if (nota[i] > nota[posMelhor]){
			posMelhor = i;
		}
	}
	cout << "\n====================================";
	cout << "\ne) Melhor aluno:";
	cout << "\n Nome     : " << nome[posMelhor];
	cout << "\n Nota     : " << nota[posMelhor];
	cout << "\n Sexo     : " << sexoEscrito[posMelhor];
	cout << "\n====================================";
	cout << "\nAcabou";

}

