#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int N;

    while (cin >> N &&  N) {
        int M[15][15];

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                M[i][j] = (int)pow(2, i + j);
            }
        }

        int max_digits = 0;
        int max_value = M[N-1][N-1];
        while (max_value > 0) {
            max_value /= 10;
            max_digits++;
        }


        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (j > 0) cout << " ";
                cout << setw(max_digits) << M[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
