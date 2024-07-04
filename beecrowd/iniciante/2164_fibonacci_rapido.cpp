#include <bits/stdc++.h>

using namespace std;

int main (){
    double x; cin >> x;

    cout << fixed << setprecision(1) <<
    (pow((1 + sqrt(5)) / 2, x) - pow((1 - sqrt(5)) / 2, x)) / sqrt(5) <<
    "\n";
    return 0;
}