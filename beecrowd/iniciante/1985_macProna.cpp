#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, double> precos = {{1001, 1.50}, {1002, 2.50}, {1003, 3.50}, {1004, 4.50}, {1005, 5.50}};
    int p;
    cin >> p;
    double total = 0.0;
    while (p--) {
        int codigo, quantidade;
        cin >> codigo >> quantidade;
        total += precos[codigo] * quantidade;
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
