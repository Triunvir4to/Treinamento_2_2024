#include <bits/stdc++.h>

using namespace std;

int main () {
    int a, b;

    while(cin >> a >> b && a > 0 && b > 0){
        if (a > b) swap(a, b);
        int sum = 0;

        for(int i = a; i <= b; ++i){
            sum += i;
            cout << i << " ";
        }
        cout << "Sum=" << sum << "\n";

    }

    return 0;
}