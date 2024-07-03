#include <bits/stdc++.h>

using namespace std;

int main (){
    int maior = -999999999, idx;

    for(int i = 1; i <= 100; ++i){
        int a; cin >> a;
        if(a > maior){
            maior = a;
            idx = i;
        }
    }

    cout << maior << "\n" << idx << "\n";

    return 0;
}