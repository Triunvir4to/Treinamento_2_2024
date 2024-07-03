#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int menor = min(X, Y);
    int maior = max(X, Y);

    for (int i = menor + 1; i < maior; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }

    return 0;
}
