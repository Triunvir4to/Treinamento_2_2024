#include <iostream>

using namespace std;

int main() {
    int interGols, gremioGols;
    int resposta;
    int grenais = 0;
    int interVitorias = 0;
    int gremioVitorias = 0;
    int empates = 0;

    do {
        cin >> interGols >> gremioGols;

        if (interGols > gremioGols) {
            interVitorias++;
        } else if (gremioGols > interGols) {
            gremioVitorias++;
        } else {
            empates++;
        }
        grenais++;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> resposta;
    } while (resposta == 1);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << interVitorias << endl;
    cout << "Gremio:" << gremioVitorias << endl;
    cout << "Empates:" << empates << endl;

    if (interVitorias > gremioVitorias) {
        cout << "Inter venceu mais" << endl;
    } else if (gremioVitorias > interVitorias) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
