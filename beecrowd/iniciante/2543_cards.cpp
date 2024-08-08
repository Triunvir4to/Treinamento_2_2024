#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        int M, L;
        cin >> M >> L;

        vector<vector<int>> baralhoMarcos(M, vector<int>(N));
        vector<vector<int>> baralhoLeonardo(L, vector<int>(N));

        for (int i = 0; i < M; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> baralhoMarcos[i][j];
            }
        }

        for (int i = 0; i < L; ++i) {
            for (int j = 0; j < N; ++j) {
                cin >> baralhoLeonardo[i][j];
            }
        }

        int CM, CL, A;
        cin >> CM >> CL >> A;

        CM--; CL--; A--;

        int atributoMarcos = baralhoMarcos[CM][A];
        int atributoLeonardo = baralhoLeonardo[CL][A];

        if (atributoMarcos > atributoLeonardo) {
            cout << "Marcos" << endl;
        } else if (atributoMarcos < atributoLeonardo) {
            cout << "Leonardo" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }

    return 0;
}
