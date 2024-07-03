#include <iostream>
#include <iomanip>  // Para usar setprecision

using namespace std;

int main() {
    int C;
    char T;
    double M[12][12];

    cin >> C;
    cin >> T;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double resultado = 0.0;

    for (int i = 0; i < 12; i++) {
        resultado += M[i][C];
    }

    if (T == 'S') {
        cout << fixed << setprecision(1) << resultado << endl;
    } else if (T == 'M') {
        double media = resultado / 12.0;
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}
