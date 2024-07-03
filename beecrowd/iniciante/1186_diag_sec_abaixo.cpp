#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char operacao;
    double matriz[12][12];
    double soma = 0.0;
    int count = 0;

    cin >> operacao;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 12; ++i) {
        for (int j = 12 - i; j < 12; ++j) {
            soma += matriz[i][j];
            count++;
        }
    }

    cout << fixed << setprecision(1);
    if (operacao == 'S') {
        cout << soma << endl;
    } else if (operacao == 'M') {
        cout << soma / count << endl;
    }

    return 0;
}
