#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, n, sum = 0; cin >> a;
    while(cin >> n && n <= 0);
    for(int i = 0; i < n; ++i)
        sum += a + i;

    cout << sum << "\n";
    return 0;
}