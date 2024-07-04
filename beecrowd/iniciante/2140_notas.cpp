#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> notas = {2, 5, 10, 20, 50, 100};
    int N, M;

    while (cin >> N >> M) {
        if (N == 0 && M == 0) break;

        int troco = M - N;
        bool possible = false;

        for (int i = 0; i < notas.size() && !possible; i++) {
            for (int j = i; j < notas.size(); j++) {
                if (notas[i] + notas[j] == troco) {
                    possible = true;
                    break;
                }
            }
        }

        if (possible) cout << "possible" << endl;
        else cout << "impossible" << endl;
    }

    return 0;
}
