#include <bits/stdc++.h>

using namespace std;

int main (){
    int x; cin >> x;
    for(int i = 1; i <= x / 2; ++i)
        if(!(x % i)) cout << i << "\n";

    cout << x << "\n";

    return 0;
}