#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num;
        }
        cout << endl;
    }
    cout << endl;
}

void generateAndPrintMatrix(int N) {
    vector<vector<int>> matrix(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        matrix[i][i] = 2;
        matrix[i][N - 1 - i] = 3;
    }

    int start = N / 3;
    int end = N - start;
    for (int i = start; i < end; i++) {
        for (int j = start; j < end; j++) {
            matrix[i][j] = 1;
        }
    }

    if (N % 2 == 1)
        matrix[N/2][N/2] = 4;


    printMatrix(matrix);
}

int main() {
    int N;
    while (cin >> N)
        generateAndPrintMatrix(N);

    return 0;
}
