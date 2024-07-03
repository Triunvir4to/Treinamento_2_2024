#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int L;

    while (cin >> L) {
        vector<int> velocidades(L);

        for (int i = 0; i < L; ++i) {
            cin >> velocidades[i];
        }

        int maxVelocidade = *max_element(velocidades.begin(), velocidades.end());


        if (maxVelocidade < 10) {
            cout << 1 << endl;
        } else if (maxVelocidade < 20) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}
