#include <bits/stdc++.h>

using namespace std;

int main () {
    int positives = 0;
    double ac = 0;
    for(int i = 0; i < 6; ++i){
        double a; cin >> a;
        if(a > 0){
            ++positives;
            ac += a;
        }
    }

    cout << positives << " valores positivos\n" << fixed << setprecision(1) << ac / positives << "\n";
}