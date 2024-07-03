#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, sum = 0, i = 0;

    while(cin >> a && a > 0){
        sum += a;
        ++i;
    }

    cout << fixed << setprecision(2) << (double) sum / i << "\n";

    return 0;
}