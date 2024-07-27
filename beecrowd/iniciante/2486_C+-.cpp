#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> vitaminaC = {
            {"suco de laranja", 120},
            {"morango fresco",  85},
            {"mamao",           85},
            {"goiaba vermelha", 70},
            {"manga",           56},
            {"laranja",         50},
            {"brocolis",        34}
    };

    int T;
    while (cin >> T && T != 0) {
        string alimento;
        int quantidade, totalVitaminaC = 0;

        for (int i = 0; i < T; i++) {
            cin >> quantidade;
            cin.ignore();
            getline(cin, alimento);

            totalVitaminaC += quantidade * vitaminaC[alimento];
        }

        if (totalVitaminaC < 110) {
            cout << "Mais " << 110 - totalVitaminaC << " mg\n";
        } else if (totalVitaminaC > 130) {
            cout << "Menos " << totalVitaminaC - 130 << " mg\n";
        } else {
            cout << totalVitaminaC << " mg\n";
        }
    }

    return 0;
}
