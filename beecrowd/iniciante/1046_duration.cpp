#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b; cin >> a >> b;
    int duracao;
    if (a < b)
        duracao = b - a;
    else
        duracao = 24 - a + b;

    cout << "O JOGO DUROU " << duracao << " HORA(S)\n";
}
