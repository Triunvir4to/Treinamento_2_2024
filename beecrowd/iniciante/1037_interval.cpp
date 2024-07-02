#include <bits/stdc++.h>

using namespace std;

int main () {
    bool inInterval = false;
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
            inInterval = true;
            cout << "Intervalo " << a[i] << endl;
            break;
        }
    }

    if(!inInterval)
        cout << "Fora de intervalo\n";

    return 0;
}