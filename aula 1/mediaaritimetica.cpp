#include <iostream>
using namespace std;
main()
{

setlocale (LC_ALL, "Portuguese");

float n1 ;
float n2 ;
float n3 ;
float nfinal ;

cout << "bem vindo de novo usuario agr vamos estar fazendo sua media aritimetica";
cout << endl ;
cout << "insira o seu primeiro numero: ";
cin  >> n1 ;
cout << endl ;
cout << "insira o segundo numero por favor: ";
cin  >> n2 ;
cout << endl ;
cout << "agora por fim o ultimo numero: " ;
cin  >> n3 ;
nfinal = (n1 + n2 + n3) / 3 ;
cout << endl ;
cout << "O resultado da media e: " << nfinal ; 


}

