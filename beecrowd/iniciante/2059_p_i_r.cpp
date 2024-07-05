#include <iostream>

using namespace std;

int main() {
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;

    int soma = j1 + j2;
    bool somaPar = (soma % 2 == 0);

    if (r == 1) {
        if (a == 1) {
            cout << "Jogador 2 ganha!" << endl;
        } else {
            cout << "Jogador 1 ganha!" << endl;
        }
    } else {
        if (a == 1) {
            cout << "Jogador 1 ganha!" << endl;
        } else {
            if ((p == 1 && somaPar) || (p == 0 && !somaPar)) {
                cout << "Jogador 1 ganha!" << endl;
            } else {
                cout << "Jogador 2 ganha!" << endl;
            }
        }
    }

    return 0;
}
