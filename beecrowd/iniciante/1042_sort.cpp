#include <bits/stdc++.h>

using namespace std;

int main (){
    vector<int> a(3);
    int n[3];
    int i = 0;
    for(auto &x : a){
        cin >> x;
        n[i] = x;
        ++i;
    }

    sort(a.begin(), a.end());

    for(auto &x : a)
        cout << x << "\n";

    cout << "\n";

    for(int j = 0; j < 3; ++j)
        cout << n[j] << "\n";


    return 0;
}