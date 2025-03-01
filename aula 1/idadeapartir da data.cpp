#include <iostream>
using namespace std;
main()
{
	int da, ma, aa;
	int dn, mn, an;
	
	cout <<"bem vindo ao calculador de idade apartir do seu nascimento" << endl;
	cout << "insira o dia de hoje: " << endl ;
	cin  >> da;
	cout << "insira o mes de hoj(em numeros): " << endl;
	cin  >> ma;
	cout << "insira o ano atual: " << endl;
	cin  >> aa;
	cout << "insira agr o dia de nascimento: " << endl;
	cin  >> dn;
	cout << "insira  mes de nascimento: " << endl;
	cin  >> mn;
	cout << "insira  ano de nascimento: " << endl;
	cin  >> an;
	
	if (ma <= mn && da < dn)
	{
		cout << "sua idade atual é: " << aa - an - 1;
	}
	else if (ma >= mn)
	{
		cout << "sua idade atual é: " << aa - an;
	}
	
}
