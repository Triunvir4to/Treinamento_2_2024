#include <iostream>
#include <vector>

using namespace std;

void printMatrix(int N) {
    vector<vector<int>> matrix(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {
                matrix[i][j] = 1;
            } else if (i + j == N - 1) {
                matrix[i][j] = 2;
            } else {
                matrix[i][j] = 3;
            }
            if(i == N / 2 && i == j && (N % 2))matrix[i][j] = 2;
        }
    }

    for (const auto& row : matrix) {
        for (int num : row)
            cout << num;

        cout << endl;
    }
}

int main() {
    int N;
    while (cin >> N) {
        if (N < 3 || N >= 70)
            break;

        printMatrix(N);

    }
    return 0;
}
