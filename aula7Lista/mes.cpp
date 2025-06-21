#include <iostream>
using namespace std;
main(){
	string meses[12] = {"jan", "fev", "mar", "abr", "mai", "jun", "jul", "ago", "set", "out", "nov", "dez"};
	int num_mes;
	
	cout << "Favor, insira o numero do mes desejado: ";
	cin >> num_mes;
	
	switch (num_mes){
	case 1:
		cout << "o mes escolhido é " << meses[0];
	break;
	
	case 2:
		cout << "o mes escolhido é " << meses[1];
	break;
	
	case 3:
		cout << "o mes escolhido é " << meses[2];
	break;
	
	case 4:
		cout << "o mes escolhido é " << meses[3];
	break;
	
	case 5:
		cout << "o mes escolhido é " << meses[4];
	break;
	
	case 6:
		cout << "o mes escolhido é " << meses[5];
	break;
	
	case 7:
		cout << "o mes escolhido é " << meses[6];
	break;
	
	case 8:
		cout << "o mes escolhido é " << meses[7];
	break;
	
	case 9:
		cout << "o mes escolhido é " << meses[8];
	break;
	
	case 10:
		cout << "o mes escolhido é " << meses[9];
	break;
	
	case 11:
		cout << "o mes escolhido é " << meses[10];
	break;
	
	case 12:
		cout << "o mes escolhido é " << meses[11];
	break;
	
	default:
		cout << num_mes << " Nao e um mes valido";
	
	
	}

}
