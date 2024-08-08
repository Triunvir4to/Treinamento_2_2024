#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, I;
    while (cin >> N >> I) {
        int countCS = 0;
        for (int k = 0; k < N; ++k) {
            int id, gameType;
            cin >> id >> gameType;
            if (id == I && gameType == 0) {
                countCS++;
            }
        }
        cout << countCS << endl;
    }
    return 0;
}
