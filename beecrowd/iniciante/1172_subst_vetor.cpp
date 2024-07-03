#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> a(10);
    for(auto &x : a) {
        cin >> x;
        if (x <= 0) x = 1;
    }

    for(int i = 0; i < a.size(); ++ i)
        cout << "X[" << i << "] = " << a[i] << "\n";

}