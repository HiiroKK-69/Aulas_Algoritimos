#include <iostream>
using namespace std;
main()
{
setlocale (LC_ALL, "Portuguese");
//aqui como n�o sei se o usuario vai somar n�meros inteiros ou reais preferi usar float para que n�o aja erros para o usu�rio

float n1;
float n2;

cout << "Bem vindo a somata��o o algoritimo que apenas soma 2 numeros";
cout << endl ;
cout << "insira o primeiro numero: ";
cin  >> n1 ;
cout << endl ;
cout << "insira o segundo numero: ";
cin  >> n2 ; 
cout << endl;
cout << "a soma destes n�meros �: ";
cout << n1 + n2;

}

