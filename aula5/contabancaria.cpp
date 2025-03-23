#include <iostream>
using namespace std;
main() {
    // Declaração das variáveis
    int numeroConta, tipoOperacao;
    double saldo, valorOperacao;

    // Leitura dos dados da conta
    cout << "Digite o número da conta: ";
    cin >> numeroConta;

    cout << "Digite o saldo atual: ";
    cin >> saldo;

    // Leitura do tipo de operação
    cout << "Digite o tipo de operação (deposito=1 ou retirada=2): ";
    cin >> tipoOperacao;

    // Leitura do valor da operação
    cout << "Digite o valor da operação: ";
    cin >> valorOperacao;

    // Realização da operação
    if (tipoOperacao == 1) {
        saldo += valorOperacao;
    } else if (tipoOperacao == 2) {
        saldo -= valorOperacao;
    } else {
        cout << "Tipo de operação inválido!" << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Exibição do novo saldo
    cout << "Novo saldo: " << saldo << endl;

    // Verificação se a conta está estourada
    if (saldo < 0) {
        cout << "Conta estourada!" << endl;
    }
}
