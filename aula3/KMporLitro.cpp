#include <iostream>
using namespace std;
main()
{
	//variaveis
	int kminicial, kmfinal, kmandado;
	float litros, precogas, gasconsumida, gasto;
	string marca;
	
	//pedindo os dados para o usuario
	cout << "Muito bom dia, boa tarda, boa noite.";
	cout << "\nPor favor insira a marca de seu veiculo: ";
	cin  >> marca;
	cout << "Insira a quilometragem inicial: ";
	cin  >> kminicial;
	cout << "Insira a quilometragem final: ";
	cin  >> kmfinal;
	cout <<"Insira os litros consumidos: ";
	cin  >> litros;
	cout << "Insira o preço do litro: ";
	cin  >> precogas;
	
	//processo
	kmandado = kmfinal - kminicial;
	gasconsumida = kmandado / litros;
	gasto = precogas / kmandado;
	
	//saida
	
	cout << "===================================" << "\n";
	cout << "Marca....................." << marca << "\n";
	cout << "Km inicial................" << kminicial << "\n" ;
	cout << "Km final.................." << kmfinal << "\n";
	cout << "Litros consumidos........." << litros << "\n";
	cout << "===================================" << "\n";
	cout << "Gasto de Combustivel......" << gasconsumida << "\n";
	cout << "Gasto por Km.............." << gasto << "\n";
	cout << "Km andados................" << kmandado << "\n";
	cout << "===================================" << "\n";
}
