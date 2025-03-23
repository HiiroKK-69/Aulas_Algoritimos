#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declaração das variáveis
    int numeroReserva, quantidadeHospedes, tipoQuarto, quantidadeDiarias, numeroMassagens;
    string nomeResponsavel;
    double valorFrigobar, valorBar;
    double valorDiaria = 0, adicionalHospedes = 0, valorMassagem = 0, valorTotalMassagem = 0;
    double valorTotalFrigobar, valorTotalBar, iss = 0, contaFinal;

    // Leitura dos dados
    cout << "Digite o número da reserva: ";
    cin >> numeroReserva;

    cin.ignore(); // Limpa o buffer do teclado
    cout << "Digite o nome do responsável pela reserva: ";
    getline(cin, nomeResponsavel);

    cout << "Digite a quantidade de hóspedes: ";
    cin >> quantidadeHospedes;

    cout << "Digite o tipo de quarto (1-Standard, 2-Luxo, 3-VIP): ";
    cin >> tipoQuarto;

    cout << "Digite a quantidade de diárias: ";
    cin >> quantidadeDiarias;

    cout << "Digite o valor consumido no frigobar: ";
    cin >> valorFrigobar;

    cout << "Digite o número de serviços de massagem utilizados: ";
    cin >> numeroMassagens;

    cout << "Digite o valor do consumo de bar: ";
    cin >> valorBar;

    // Cálculo do valor da diária com base no tipo de quarto
    switch (tipoQuarto) {
        case 1:
            valorDiaria = 50.00;
            break;
        case 2:
            valorDiaria = 80.00;
            break;
        case 3:
            valorDiaria = 150.00;
            break;
        default:
            cout << "Tipo de quarto inválido!" << endl;
            return 1; // Encerra o programa com código de erro
    }

    // Cálculo do adicional por quantidade de hóspedes
    if (quantidadeHospedes >= 3 && quantidadeHospedes <= 4) {
        adicionalHospedes = 20.00 * quantidadeDiarias;
    } else if (quantidadeHospedes >= 5) {
        adicionalHospedes = 40.00 * quantidadeDiarias;
    }

    // Cálculo do valor total das massagens
    if (numeroMassagens <= 3) {
        valorMassagem = 80.00;
    } else {
        valorMassagem = 65.00;
    }
    valorTotalMassagem = valorMassagem * numeroMassagens;

    // Cálculo do valor total do frigobar (consumo + taxa de manutenção)
    valorTotalFrigobar = valorFrigobar + 12.00;

    // Cálculo do valor total do bar (consumo + 10% de comissão)
    valorTotalBar = valorBar * 1.10;

    // Cálculo do ISS com base na quantidade de diárias
    if (quantidadeDiarias > 10) {
        iss = 0.01; // 1% para mais de 10 dias
    } else if (quantidadeDiarias > 5) {
        iss = 0.03; // 3% para mais de 5 dias
    } else {
        iss = 0.05; // 5% para até 5 dias
    }

    // Cálculo da conta final
    double valorTotalDiarias = (valorDiaria + adicionalHospedes) * quantidadeDiarias;
    double subtotal = valorTotalDiarias + valorTotalMassagem + valorTotalFrigobar + valorTotalBar;
    contaFinal = subtotal * (1 + iss);

    // Exibição dos resultados
    cout << fixed << setprecision(2); // Formatação para 2 casas decimais
    cout << "\n--- Detalhes da Conta ---" << endl;
    cout << "Número da reserva: " << numeroReserva << endl;
    cout << "Nome do responsável: " << nomeResponsavel << endl;
    cout << "Tipo de quarto: " << tipoQuarto << endl;
    cout << "Número de dias: " << quantidadeDiarias << endl;
    cout << "Valor das diárias: R$ " << valorTotalDiarias << endl;
    cout << "Valor total do serviço de massagem: R$ " << valorTotalMassagem << endl;
    cout << "Valor total do serviço de frigobar: R$ " << valorTotalFrigobar << endl;
    cout << "Valor total do serviço de bar: R$ " << valorTotalBar << endl;
    cout << "ISS: " << iss * 100 << "%" << endl;
    cout << "Conta Final: R$ " << contaFinal << endl;
}
