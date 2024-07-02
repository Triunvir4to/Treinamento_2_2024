#include <bits/stdc++.h>

using namespace std;

int main () {
    int pares = 0;
    for(int i = 0; i < 5; ++i){
        int a; cin >> a;
        if(a % 2 == 0)++pares;
    }

    cout << pares << " valores pares\n";
}