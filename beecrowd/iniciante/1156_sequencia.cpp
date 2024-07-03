#include <bits/stdc++.h>

using namespace std;

int main (){
    double sum = 0, a = 1, b = 1;

    while(a <= 39){
        sum += a / b;
        a += 2;
        b *= 2;
    }

    cout << fixed << setprecision(2) << sum << "\n";

    return 0;
}