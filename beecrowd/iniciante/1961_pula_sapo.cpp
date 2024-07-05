#include <bits/stdc++.h>

using namespace std;

int main() {
    int P, N;
    cin >> P >> N;

    vector<int> canos(N);

    for (int i = 0; i < N; i++) {
        cin >> canos[i];
    }

    for (int i = 0; i < N - 1; i++) {
        if (abs(canos[i + 1] - canos[i]) > P) {
            cout << "GAME OVER\n";
            return 0;
        }
    }

    cout << "YOU WIN\n";
    return 0;
}
