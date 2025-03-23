#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declara��o das vari�veis
    int numeroReserva, quantidadeHospedes, tipoQuarto, quantidadeDiarias, numeroMassagens;
    string nomeResponsavel;
    double valorFrigobar, valorBar;
    double valorDiaria = 0, adicionalHospedes = 0, valorMassagem = 0, valorTotalMassagem = 0;
    double valorTotalFrigobar, valorTotalBar, iss = 0, contaFinal;

    // Leitura dos dados
    cout << "Digite o n�mero da reserva: ";
    cin >> numeroReserva;

    cin.ignore(); // Limpa o buffer do teclado
    cout << "Digite o nome do respons�vel pela reserva: ";
    getline(cin, nomeResponsavel);

    cout << "Digite a quantidade de h�spedes: ";
    cin >> quantidadeHospedes;

    cout << "Digite o tipo de quarto (1-Standard, 2-Luxo, 3-VIP): ";
    cin >> tipoQuarto;

    cout << "Digite a quantidade de di�rias: ";
    cin >> quantidadeDiarias;

    cout << "Digite o valor consumido no frigobar: ";
    cin >> valorFrigobar;

    cout << "Digite o n�mero de servi�os de massagem utilizados: ";
    cin >> numeroMassagens;

    cout << "Digite o valor do consumo de bar: ";
    cin >> valorBar;

    // C�lculo do valor da di�ria com base no tipo de quarto
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
            cout << "Tipo de quarto inv�lido!" << endl;
            return 1; // Encerra o programa com c�digo de erro
    }

    // C�lculo do adicional por quantidade de h�spedes
    if (quantidadeHospedes >= 3 && quantidadeHospedes <= 4) {
        adicionalHospedes = 20.00 * quantidadeDiarias;
    } else if (quantidadeHospedes >= 5) {
        adicionalHospedes = 40.00 * quantidadeDiarias;
    }

    // C�lculo do valor total das massagens
    if (numeroMassagens <= 3) {
        valorMassagem = 80.00;
    } else {
        valorMassagem = 65.00;
    }
    valorTotalMassagem = valorMassagem * numeroMassagens;

    // C�lculo do valor total do frigobar (consumo + taxa de manuten��o)
    valorTotalFrigobar = valorFrigobar + 12.00;

    // C�lculo do valor total do bar (consumo + 10% de comiss�o)
    valorTotalBar = valorBar * 1.10;

    // C�lculo do ISS com base na quantidade de di�rias
    if (quantidadeDiarias > 10) {
        iss = 0.01; // 1% para mais de 10 dias
    } else if (quantidadeDiarias > 5) {
        iss = 0.03; // 3% para mais de 5 dias
    } else {
        iss = 0.05; // 5% para at� 5 dias
    }

    // C�lculo da conta final
    double valorTotalDiarias = (valorDiaria + adicionalHospedes) * quantidadeDiarias;
    double subtotal = valorTotalDiarias + valorTotalMassagem + valorTotalFrigobar + valorTotalBar;
    contaFinal = subtotal * (1 + iss);

    // Exibi��o dos resultados
    cout << fixed << setprecision(2); // Formata��o para 2 casas decimais
    cout << "\n--- Detalhes da Conta ---" << endl;
    cout << "N�mero da reserva: " << numeroReserva << endl;
    cout << "Nome do respons�vel: " << nomeResponsavel << endl;
    cout << "Tipo de quarto: " << tipoQuarto << endl;
    cout << "N�mero de dias: " << quantidadeDiarias << endl;
    cout << "Valor das di�rias: R$ " << valorTotalDiarias << endl;
    cout << "Valor total do servi�o de massagem: R$ " << valorTotalMassagem << endl;
    cout << "Valor total do servi�o de frigobar: R$ " << valorTotalFrigobar << endl;
    cout << "Valor total do servi�o de bar: R$ " << valorTotalBar << endl;
    cout << "ISS: " << iss * 100 << "%" << endl;
    cout << "Conta Final: R$ " << contaFinal << endl;
}
