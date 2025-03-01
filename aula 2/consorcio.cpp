#include <iostream>
using namespace std;
main()
{
	int totalpre, prepagas;
	float valorpre,totalpago, saldodev;
	
	totalpre = 27;
	prepagas = 2;
	valorpre = 119.57;
	
	totalpago =  prepagas * valorpre;
	saldodev = totalpre * valorpre - totalpago;
	
	cout <<"ola ser vivo" << endl;
	cout <<"voce pagou: " << totalpago << "R$" <<endl;
	cout <<"e ainda restam: " << saldodev << "R$ a serem pagos";
	
	
	
}
