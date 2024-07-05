#include <bits/stdc++.h>

using namespace std;

int main () {
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        cout << (x % 2 ? 1 : 0) << "\n";
    }
    return 0;
}