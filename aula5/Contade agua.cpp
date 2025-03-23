#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declara��o das vari�veis
    int matricula, m3Consumidos, categoria;
    double valorConsumo = 0.0, taxaSaneamento = 0.0, valorPIS = 0.0, valorCOFINS = 0.0, valorTotal = 0.0;

    // Leitura dos dados
    cout << "Digite a matr�cula do consumidor: ";
    cin >> matricula;

    cout << "Digite o n�mero de m� consumidos: ";
    cin >> m3Consumidos;

    cout << "Digite a categoria (1-RESIDENCIAL, 2-COMERCIAL, 3-INDUSTRIAL): ";
    cin >> categoria;

    // C�lculo do valor do consumo de �gua
    if (m3Consumidos <= 10) {
        valorConsumo = m3Consumidos * 2.99;
    } else if (m3Consumidos <= 25) {
        valorConsumo = 10 * 2.99 + (m3Consumidos - 10) * 5.48;
    } else if (m3Consumidos <= 50) {
        valorConsumo = 10 * 2.99 + 15 * 5.48 + (m3Consumidos - 25) * 7.69;
    } else {
        valorConsumo = 10 * 2.99 + 15 * 5.48 + 25 * 7.69 + (m3Consumidos - 50) * 9.22;
    }

    // C�lculo da taxa de saneamento b�sico
    switch (categoria) {
        case 1:
            taxaSaneamento = 5.00;
            break;
        case 2:
            taxaSaneamento = 10.00;
            break;
        case 3:
            taxaSaneamento = 15.00;
            break;
        default:
            cout << "Categoria inv�lida!" << endl;
            return 1; // Encerra o programa com c�digo de erro
    }

    // C�lculo dos impostos (PIS e COFINS)
    valorPIS = (valorConsumo + taxaSaneamento) * 0.0065; // 0,65%
    valorCOFINS = (valorConsumo + taxaSaneamento) * 0.03; // 3%

    // C�lculo do valor total da conta
    valorTotal = valorConsumo + taxaSaneamento + valorPIS + valorCOFINS;

    // Exibi��o dos resultados
    cout << fixed << setprecision(2); // Formata��o para 2 casas decimais
    cout << "\n--- Detalhes da Conta ---" << endl;
    cout << "Matr�cula do consumidor: " << matricula << endl;
    cout << "Valor do consumo de �gua: R$ " << valorConsumo << endl;
    cout << "Valor do saneamento b�sico: R$ " << taxaSaneamento << endl;
    cout << "Valor do PIS: R$ " << valorPIS << endl;
    cout << "Valor do COFINS: R$ " << valorCOFINS << endl;
    cout << "Valor total da conta: R$ " << valorTotal << endl;

}
