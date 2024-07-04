#include <bits/stdc++.h>

using namespace std;

int main (){
    int n, i = 0, x = 0; cin >> n;
    long long sum = 0;
    vector<pair<long long, bool>> m(n, {0, false});
    for(auto &k : m)cin >> k.first;
    while(0 <= i && i < n && m[i].first){
        int t = i;
        i = (m[t].first % 2) ? 1 + i : i - 1;
        if(!m[t].second){
            m[t].second = true;
            ++x;
        }
        --m[t].first;
    }

    for(const auto &k : m)sum += k.first;

    cout << x << " " << sum << "\n";

}