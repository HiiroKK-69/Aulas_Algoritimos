#include <iostream>
using namespace std;
main(){
	string nome;
	int sexo,cont_sexm = 0,cont_sexf = 0;
	
	for (int i = 1; i <= 10; i++){
		cout << "\nPessoa numero" << i;
		
		cout << "\ninsira o nome:\n";
		cin >> nome;
		cout << "\ninsira o sexo(1-masc, 2-fem):\n";
		cin >> sexo;
		
		if (sexo == 1){
			cont_sexm ++;
			cout << "\nSexo registrado como Masculino";
		}else if (sexo == 2){
			cont_sexf ++;
			cout << "\nSexo registrado como Feminino";
		}else{
			cout << "\nsexo nao valido";
		}
	}
	
	cout << "\nNumero de Homens " << cont_sexm;
	cout << "\nNumero de Mulheres " << cont_sexf;
		
}
