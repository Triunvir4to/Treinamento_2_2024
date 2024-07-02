#include <bits/stdc++.h>

using namespace std;

int main (){

    int p[] = {2, 3, 4, 1};

    double nota = 0;
    for(int i = 0; i < 4; ++i){
        double v;
        cin >> v;
        nota += v * p[i];
    }

    nota /= 10;

    cout << "Media: " << fixed << setprecision(1) << nota << "\n";

    if(nota > 7.0)cout << "Aluno aprovado.\n";
    else if(nota >= 5.0 && nota <= 6.9){
        cout << "Aluno em exame.\n";
        double v; cin >> v;
        nota += v;
        cout << "Nota do exame: " << fixed << setprecision(1) <<  v << "\n";
        if(nota / 2 > 5.0)cout <<"Aluno aprovado.\n" << "Media final: "  << fixed << setprecision(1) << nota/2 << "\n";
        else cout << "Aluno reprovado.\n";
    }else cout << "Aluno reprovado.\n";

    return 0;
}