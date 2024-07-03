#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char O;
    double M[12][12];

    cin >> O;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double soma = 0.0;
    int count = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < i; j++) {
            soma += M[i][j];
            count++;
        }
    }

    if (O == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    } else if (O == 'M') {
        double media = soma / count;
        cout << fixed << setprecision(1) << media << endl;
    }

    return 0;
}
