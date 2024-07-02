#include <bits/stdc++.h>

using namespace std;

double distancia(pair<double, double> a, pair<double, double> b){
    return sqrt(pow(b.first - a.first, 2) + pow(b.second - a.second, 2));
}

int main () {
    pair <double, double> a, b;

    cin >> a.first >> a.second >> b.first >> b.second;

    cout << fixed << setprecision(4) << distancia(a, b) << endl;

    return 0;
}