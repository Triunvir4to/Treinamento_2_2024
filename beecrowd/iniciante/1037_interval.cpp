#include <bits/stdc++.h>

using namespace std;

int main () {
    double v; cin >> v;

    if(v < 0){
        cout << "Fora de intervalo\n";
        return 0;
    }

    int vs[] = {25, 50, 75, 100};
    string a[] = {"[0,25]", "(25,50]", "(50,75]", "(75,100]"};

    for(int i = 0; i < 4; ++i){
        double val = v - vs[i];
        if(val <= 0){
            cout << "Intervalo " << a[i] << endl;
            return 0;
        }
    }

    cout << "Fora de intervalo\n";

    return 0;
}