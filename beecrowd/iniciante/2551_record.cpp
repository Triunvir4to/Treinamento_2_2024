#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N) {
        vector<int> recordDays;
        double maxSpeed = -1.0;

        for (int i = 1; i <= N; ++i) {
            int T, D;
            cin >> T >> D;
            double speed = static_cast<double>(D) / T;
            if (speed > maxSpeed) {
                recordDays.push_back(i);
                maxSpeed = speed;
            }
        }

        for (int day : recordDays)
            cout << day << endl;

    }
    return 0;
}
