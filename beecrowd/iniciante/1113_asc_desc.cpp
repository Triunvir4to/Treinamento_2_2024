#include <bits/stdc++.h>

using namespace std;

int main (){
    int x, y;
    while(cin >> x >> y && x != y){
        if(x > y) cout << "Decrescente\n";
        else cout << "Crescente\n";
    }
    return 0;
}