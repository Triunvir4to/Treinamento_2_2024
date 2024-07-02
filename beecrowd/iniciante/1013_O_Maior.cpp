#include <bits/stdc++.h>

using namespace std;

int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

int main (){
    int a, b, c;
    cin >> a >> b >> c;

    cout << maiorAB(c, maiorAB(a,b)) << " eh o maior \n";

    return 0;
}