#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double nota1, nota2;
    int opcao;

    do {
        cin >> nota1;
        while (nota1 < 0.0 || nota1 > 10.0) {
            cout << "nota invalida\n";
            cin >> nota1;
        }

        cin >> nota2;
        while (nota2 < 0.0 || nota2 > 10.0) {
            cout << "nota invalida\n";
            cin >> nota2;
        }

        double media = (nota1 + nota2) / 2.0;
        cout << fixed << setprecision(2);
        cout << "media = " << media << "\n";

        cout << "novo calculo (1-sim 2-nao)\n";
        cin >> opcao;
        while (opcao < 1 || opcao > 2) {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> opcao;
        }
    } while (opcao == 1);

    return 0;
}
