#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, caso = 1;

    while (cin >> N) {
        vector<int> sequencia(1, 0);
        int total_numeros = 0;

        for (int i = 0; i <= N; ++i) {
            for (int j = 0; j < i; ++j) {
                sequencia.push_back(i);
            }
            total_numeros += i;
        }

        cout << "Caso " << caso++ << ": " << total_numeros + 1 << " numero" << (total_numeros > 0 ? "s" : "") << endl;

        for (const auto &i : sequencia) {
            if (i > 0) cout << " ";
            cout << i;
        }
        cout << endl << endl;
    }

    return 0;
}
