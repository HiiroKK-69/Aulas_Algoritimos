#include <iostream>
using namespace std;
main()
{
float custo, impos, comi, precofinal;

cout << "insira o valor do custo: ";
cin  >> custo;

impos = custo * 0.45;
comi = custo * 0.10;
precofinal = custo + impos + comi;


cout << "o preço final do carro sera: " << precofinal << "R$";

}
