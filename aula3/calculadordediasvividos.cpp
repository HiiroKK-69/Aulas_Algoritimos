#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int dia, mes, ano, idade; // vari�veis do usu�rio
    int diaA, mesA, anoA;     // vari�veis da data atual
    int diasvividos;          // vari�vel de sa�da

    // Obtendo a data atual do computador
    time_t now = time(0);
    tm* localTime = localtime(&now);

    // Extraindo o dia, m�s e ano
    diaA = localTime->tm_mday;
    mesA = localTime->tm_mon + 1;
    anoA = localTime->tm_year + 1900;

    cout << "Bem-vindo ao calculador de dias vividos!\n";
    cout << "Por favor, insira sua data de nascimento:\n";
    cout << "Dia: ";
    cin >> dia;
    cout << "M�s: ";
    cin >> mes;
    cout << "Ano: ";
    cin >> ano;

    // Calculando a idade
    idade = anoA - ano;
    
    if (mes > mesA || (mes == mesA && dia > diaA))
    {
    	idade--;
	}
    
    diasvividos = idade * 360;
    
    cout << "-------------------------------";
    cout << "\nVoce tendo " << idade<< " anos";
    cout << "\nViveu aproximadamente " << diasvividos << " dias";
    
	
}
