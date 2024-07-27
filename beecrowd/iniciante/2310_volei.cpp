#include <iostream>
#include <iomanip>  // Para usar o setprecision
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    int totalSaques = 0, totalBloqueios = 0, totalAtaques = 0;
    int totalSaquesSucesso = 0, totalBloqueiosSucesso = 0, totalAtaquesSucesso = 0;

    for (int i = 0; i < N; i++) {
        string nome;
        cin >> nome;

        int S, B, A;
        int S1, B1, A1;

        cin >> S >> B >> A;
        cin >> S1 >> B1 >> A1;

        totalSaques += S;
        totalBloqueios += B;
        totalAtaques += A;
        totalSaquesSucesso += S1;
        totalBloqueiosSucesso += B1;
        totalAtaquesSucesso += A1;
    }

    double pctSaques = 100.0 * totalSaquesSucesso / totalSaques;
    double pctBloqueios = 100.0 * totalBloqueiosSucesso / totalBloqueios;
    double pctAtaques = 100.0 * totalAtaquesSucesso / totalAtaques;

    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << pctSaques << " %." << endl;
    cout << "Pontos de Bloqueio: " << pctBloqueios << " %." << endl;
    cout << "Pontos de Ataque: " << pctAtaques << " %." << endl;

    return 0;
}
