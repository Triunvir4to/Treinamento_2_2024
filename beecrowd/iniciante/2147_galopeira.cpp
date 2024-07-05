#include <bits/stdc++.h>

using namespace std;

int main (){
    int n; cin >> n;
    while(n--){
        string a; cin >> a;
        double x = (double) a.length() / 100;
        cout << fixed << setprecision(2) << x << "\n";
    }

    return 0;
}