#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valor;
    cin >> valor;

    int notas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    int quant_notas[6];
    int quant_moedas[6];

    cout << "NOTAS:\n";
    for (int i = 0; i < 6; i++) {
        quant_notas[i] = int(valor / notas[i]);
        valor -= quant_notas[i] * notas[i];
        cout << quant_notas[i] << " nota(s) de R$ " << fixed << setprecision(2) << notas[i] << ".00\n";
    }

    valor += 0.0000001;

    cout << "MOEDAS:\n";
    for (int i = 0; i < 6; i++) {
        quant_moedas[i] = int(valor / moedas[i]);
        valor -= quant_moedas[i] * moedas[i];
        cout << quant_moedas[i] << " moeda(s) de R$ " << fixed << setprecision(2) << moedas[i] << '\n';
    }

    return 0;
}
