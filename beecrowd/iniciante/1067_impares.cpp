#include <iostream>

using namespace std;

int main () {
    int x; cin >> x;

    for (int i = 1; i <= x; ++i)
        if(i % 2) cout << i << "\n";

    return 0;
}