#include <iostream>
using namespace std;
main() {
    // Declara��o das vari�veis
    int numeroConta, tipoOperacao;
    double saldo, valorOperacao;

    // Leitura dos dados da conta
    cout << "Digite o n�mero da conta: ";
    cin >> numeroConta;

    cout << "Digite o saldo atual: ";
    cin >> saldo;

    // Leitura do tipo de opera��o
    cout << "Digite o tipo de opera��o (deposito=1 ou retirada=2): ";
    cin >> tipoOperacao;

    // Leitura do valor da opera��o
    cout << "Digite o valor da opera��o: ";
    cin >> valorOperacao;

    // Realiza��o da opera��o
    if (tipoOperacao == 1) {
        saldo += valorOperacao;
    } else if (tipoOperacao == 2) {
        saldo -= valorOperacao;
    } else {
        cout << "Tipo de opera��o inv�lido!" << endl;
        return 1; // Encerra o programa com c�digo de erro
    }

    // Exibi��o do novo saldo
    cout << "Novo saldo: " << saldo << endl;

    // Verifica��o se a conta est� estourada
    if (saldo < 0) {
        cout << "Conta estourada!" << endl;
    }
}
