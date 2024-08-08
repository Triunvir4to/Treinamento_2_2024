#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        vector<int> votos(N);
        for (int i = 0; i < N; ++i) {
            cin >> votos[i];
        }

        int votos_favoraveis = count(votos.begin(), votos.end(), 1);
        int dois_tercos = (2 * N + 2) / 3;

        if (votos_favoraveis >= dois_tercos) {
            cout << "impeachment" << endl;
        } else {
            cout << "acusacao arquivada" << endl;
        }
    }

    return 0;
}
