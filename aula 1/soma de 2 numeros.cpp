#include <iostream>
using namespace std;
main()
{
setlocale (LC_ALL, "Portuguese");
//aqui como não sei se o usuario vai somar números inteiros ou reais preferi usar float para que não aja erros para o usuário

float n1;
float n2;

cout << "Bem vindo a somatação o algoritimo que apenas soma 2 numeros";
cout << endl ;
cout << "insira o primeiro numero: ";
cin  >> n1 ;
cout << endl ;
cout << "insira o segundo numero: ";
cin  >> n2 ; 
cout << endl;
cout << "a soma destes números é: ";
cout << n1 + n2;

}

