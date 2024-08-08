#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    while (cin >> N >> Q) {
        vector<int> notas(N);

        for (int i = 0; i < N; ++i) {
            cin >> notas[i];
        }

        sort(notas.rbegin(), notas.rend());

        for (int i = 0; i < Q; ++i) {
            int p;
            cin >> p;
            cout << notas[p - 1] << endl;
        }
    }

    return 0;
}
