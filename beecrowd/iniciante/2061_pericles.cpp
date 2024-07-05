#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string acao;
    for (int i = 0; i < M; ++i) {
        cin >> acao;

        if (acao == "fechou") {
            N = N - 1 + 2;
        } else if (acao == "clicou") {
            N--;
        }
    }

    cout << N << endl;

    return 0;
}
