#include <bits/stdc++.h>

using namespace std;

int main (){
    int x, z, n = 0, sum = 0;

    cin >> x;
    while(cin >> z && z <= x);

    while(sum < z){
        sum += x;
        ++x;
        ++n;
    }

    cout << n << "\n";


    return 0;
}