#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string jogador1, jogador2;

    while (N--) {
        cin >> jogador1 >> jogador2;
        if (jogador1 == "ataque") {
            if (jogador2 == "ataque") {
                cout << "Aniquilacao mutua\n";
            } else if (jogador2 == "pedra") {
                cout << "Jogador 1 venceu\n";
            } else {
                cout << "Jogador 1 venceu\n";
            }
        } else if (jogador1 == "pedra") {
            if (jogador2 == "ataque") {
                cout << "Jogador 2 venceu\n";
            } else if (jogador2 == "pedra") {
                cout << "Sem ganhador\n";
            } else {
                cout << "Jogador 1 venceu\n";
            }
        } else {
            if (jogador2 == "ataque") {
                cout << "Jogador 2 venceu\n";
            } else if (jogador2 == "pedra") {
                cout << "Jogador 2 venceu\n";
            } else {
                cout << "Ambos venceram\n";
            }
        }
    }

    return 0;
}
