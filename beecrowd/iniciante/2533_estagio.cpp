#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    while (cin >> M) {
        vector<int> notas(M);
        vector<int> cargas(M);

        for (int i = 0; i < M; ++i)
            cin >> notas[i] >> cargas[i];


        double somaNotasPesos = 0;
        int somaPesos = 0;

        for (int i = 0; i < M; ++i) {
            somaNotasPesos += notas[i] * cargas[i];
            somaPesos += cargas[i];
        }

        double IRA = somaNotasPesos / somaPesos;
        cout << fixed << setprecision(4) << IRA / 100 << endl;
    }

    return 0;
}
