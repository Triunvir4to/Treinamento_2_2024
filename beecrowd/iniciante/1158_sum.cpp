#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;

    while(n--){
        int a, b, init, sum = 0;
        cin >> a >> b;
        init = (a % 2) ? a : 1 + a;
        while(b--){
            sum += init;
            init += 2;
        }

        cout << sum << "\n";
    }


    return 0;
}