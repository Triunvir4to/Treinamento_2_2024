#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> cameras(N + 1, vector<int>(N + 1));
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            cin >> cameras[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int count = 0;

            count += cameras[i][j];
            count += cameras[i][j + 1];
            count += cameras[i + 1][j];
            count += cameras[i + 1][j + 1];

            if (count >= 2) {
                cout << 'S';
            } else {
                cout << 'U';
            }
        }
        cout << endl;
    }

    return 0;
}
