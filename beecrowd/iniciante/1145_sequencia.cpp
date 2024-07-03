#include <bits/stdc++.h>

using namespace std;

int main () {
    int x, y;
    cin >> x >> y;
    int i = 1;

    while (i <= y) {
        for (int counter = 0; counter < x && i <= y; ++counter) {
            if (counter == x - 1 || i == y) {
                cout << i;
            } else {
                cout << i << " ";
            }
            ++i;
        }
        cout << "\n";
    }

    return 0;
}
