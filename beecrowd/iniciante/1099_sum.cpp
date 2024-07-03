#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while(n--){
        int a, b, sum = 0; cin >> a >> b;
        if(a > b)swap(a, b); ++a;
        a = a % 2 ? a : 1 + a;
        for(int i = a; i < b; i += 2)
            sum += i;

        cout << sum << "\n";
    }

    return 0;
}