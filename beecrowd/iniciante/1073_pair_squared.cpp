#include <bits/stdc++.h>

using namespace std;

int main () {
    int x; cin >> x;

    for(int i = 2; i <= x; i +=2)
        cout << i <<"^2 = " << i * i << "\n";

    return 0;
}