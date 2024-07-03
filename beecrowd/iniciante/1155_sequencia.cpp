#include <bits/stdc++.h>

using namespace std;

int main (){
    double sum = 0;
    for(int i = 1; i <= 100; ++i)
        sum += (double) 1 / i;

    cout << fixed << setprecision(2) << sum << "\n";

    return 0;
}