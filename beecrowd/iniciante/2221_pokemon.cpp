#include <iostream>
using namespace std;

int calcularValorGolpe(int ataque, int defesa, int level, int bonus) {
    if (level % 2 == 0) {
        return (ataque + defesa) / 2 + bonus;
    } else {
        return (ataque + defesa) / 2;
    }
}

int main() {
    int T, B;
    int A_Dabriel, D_Dabriel, L_Dabriel;
    int A_Guarte, D_Guarte, L_Guarte;

    cin >> T;

    while (T--) {
        cin >> B;
        cin >> A_Dabriel >> D_Dabriel >> L_Dabriel;
        cin >> A_Guarte >> D_Guarte >> L_Guarte;

        int golpeDabriel = calcularValorGolpe(A_Dabriel, D_Dabriel, L_Dabriel, B);
        int golpeGuarte = calcularValorGolpe(A_Guarte, D_Guarte, L_Guarte, B);

        if (golpeDabriel > golpeGuarte) {
            cout << "Dabriel" << endl;
        } else if (golpeGuarte > golpeDabriel) {
            cout << "Guarte" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }

    return 0;
}
