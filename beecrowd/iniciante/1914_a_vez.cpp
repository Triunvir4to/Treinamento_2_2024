#include <iostream>
using namespace std;

int main() {
    int QT;
    cin >> QT;

    while (QT--) {
        string nome1, escolha1, nome2, escolha2;
        int N, M;

        cin >> nome1 >> escolha1 >> nome2 >> escolha2;

        cin >> N >> M;

        int soma = N + M;

        if (soma % 2 == 0) {
            if (escolha1 == "PAR") {
                cout << nome1 << endl;
            } else {
                cout << nome2 << endl;
            }
        } else {
            if (escolha1 == "IMPAR") {
                cout << nome1 << endl;
            } else {
                cout << nome2 << endl;
            }
        }
    }

    return 0;
}
