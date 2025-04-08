#include <iostream>
#include <cmath>
using namespace std;
main()
{
	//variaveis
	float volume, raio;
	
	//pedindo o laser da esfera(e pq laser e raio entendeu?)
	cout << "insira o raio da esfera: ";
	cin  >> raio;
	
	volume = 4 * 3.14 * pow(raio, 3) / 3;
	
	cout << "volume da esfera é: " << volume;
	
	
}
