#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        vector<vector<int>> board(N, vector<int>(M));
        vector<vector<int>> result(N, vector<int>(M, 0));

        // Leitura do tabuleiro
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> board[i][j];
                if (board[i][j] == 1) {
                    result[i][j] = 9;
                }
            }
        }

        // Contagem de pães de queijo adjacentes
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (board[i][j] == 1) {
                    continue;
                }
                int count = 0;
                if (i > 0 && board[i-1][j] == 1) count++; // Acima
                if (i < N-1 && board[i+1][j] == 1) count++; // Abaixo
                if (j > 0 && board[i][j-1] == 1) count++; // Esquerda
                if (j < M-1 && board[i][j+1] == 1) count++; // Direita
                result[i][j] = count;
            }
        }

        // Impressão do resultado
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cout << result[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
