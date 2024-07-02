#include <bits/stdc++.h>

using namespace std;

int main (){
    map<int, string> ddd = {
            {11, "Sao Paulo"},
            {61, "Brasilia"},
            {71, "Salvador"},
            {21, "Rio de Janeiro"},
            {32, "Juiz de Fora"},
            {19, "Campinas"},
            {27, "Vitoria"},
            {31, "Belo Horizonte"}
    };
    int a; cin >> a;
    cout << (ddd.find(a) != ddd.end() ? ddd[a] : "DDD nao cadastrado") << "\n";
}