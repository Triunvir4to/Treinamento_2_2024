#include <iostream>
#include <iomanip> // Para usar o setprecision

using namespace std;

int main() {
    int L;
    char T;
    double M[12][12];

    cin >> L;
    cin >> T;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double soma = 0.0;

    for (int j = 0; j < 12; j++) {
        soma += M[L][j];
    }

    if (T == 'S')
        cout << fixed << setprecision(1) << soma << endl;
    else if (T == 'M') {
        double media = soma / 12.0;
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}
