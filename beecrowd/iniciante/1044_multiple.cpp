#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b; cin >> a >> b;

    if(b < a)swap(b, a);

    cout << (b % a == 0 ? "Sao Multiplos\n" : "Nao sao Multiplos\n");

    return 0;
}