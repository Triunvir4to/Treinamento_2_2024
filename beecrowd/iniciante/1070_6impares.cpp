#include <iostream>

using namespace std;

int main () {
    int x; cin >> x;

    x = (x % 2) ? x : x + 1;

    for (int i = 0; i < 6; ++i, x += 2)
        cout << x << "\n";

    return 0;
}