#include <bits/stdc++.h>

using namespace std;

int main () {
    int x;
    while(cin >> x && x){
        int sum = 0;
        x = !(x % 2) ? x : x + 1;
        for(int i = 0; i < 5; ++i){
            sum += x;
            x += 2;
        }
        cout << sum << "\n";
    }
    return 0;
}