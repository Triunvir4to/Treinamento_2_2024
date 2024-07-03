#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int menor = min(X, Y);
    int maior = max(X, Y);
    int soma = 0;

    for (int i = menor; i <= maior; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}
