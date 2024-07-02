#include <bits/stdc++.h>

using namespace std;

int main () {
    int d, a, m; cin >> d;

    a = d / 365; d %= 365;
    m = d / 30; d %= 30;

    cout << a << " ano(s)\n" << m << " mes(es)\n" << d << " dia(s)\n";

    return 0;
}