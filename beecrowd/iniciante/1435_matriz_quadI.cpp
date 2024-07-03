#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (auto& row : matrix) {
        for (size_t i = 0; i < row.size(); i++) {
            cout << setw(3) << row[i];
            if (i < row.size() - 1) cout << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

vector<vector<int>> buildMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 1));
    for (int layer = 1; layer <= n / 2; ++layer) {
        for (int i = layer; i < n - layer; ++i) {
            matrix[i][layer] = layer + 1;
            matrix[i][n - layer - 1] = layer + 1;
            matrix[layer][i] = layer + 1;
            matrix[n - layer - 1][i] = layer + 1;
        }
    }
    if (n % 2 != 0)
        matrix[n/2][n/2] = n / 2 + 1;

    return matrix;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        vector<vector<int>> matrix = buildMatrix(n);
        printMatrix(matrix);
    }
    return 0;
}
