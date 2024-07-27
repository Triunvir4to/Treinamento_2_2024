#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int value;
                cin >> value;
                if (value == 1) {
                    x1 = i;
                    y1 = j;
                } else if (value == 2) {
                    x2 = i;
                    y2 = j;
                }
            }
        }
        cout << abs(x2 - x1) + abs(y2 - y1) << endl;
    }
    return 0;
}