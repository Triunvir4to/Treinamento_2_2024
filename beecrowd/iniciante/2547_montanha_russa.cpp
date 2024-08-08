#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Amin, Amax;
    while (cin >> N >> Amin >> Amax) {
        int count = 0;
        for (int i = 0; i < N; ++i) {
            int Ai;
            cin >> Ai;
            if (Ai >= Amin && Ai <= Amax) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
