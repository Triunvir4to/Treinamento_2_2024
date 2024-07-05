#include <bits/stdc++.h>

using namespace std;

int main () {
    int sum = 0;
    vector<int> t(4);
    for(auto &a : t){
        cin >> a;
        sum += a;
    }

    cout << sum - (t.size() - 1) <<  "\n";

}