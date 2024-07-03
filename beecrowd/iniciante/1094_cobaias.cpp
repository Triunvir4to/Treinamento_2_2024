#include <iostream>
#include <iomanip> // para std::setprecision

using namespace std;

int main() {
    int N;
    cin >> N;

    int totalCobaias = 0;
    int totalCoelhos = 0;
    int totalRatos = 0;
    int totalSapos = 0;

    for (int i = 0; i < N; i++) {
        int quantidade;
        char tipo;
        cin >> quantidade >> tipo;

        totalCobaias += quantidade;

        switch(tipo) {
            case 'C': totalCoelhos += quantidade; break;
            case 'R': totalRatos += quantidade; break;
            case 'S': totalSapos += quantidade; break;
        }
    }

    cout << "Total: " << totalCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << totalCoelhos << endl;
    cout << "Total de ratos: " << totalRatos << endl;
    cout << "Total de sapos: " << totalSapos << endl;

    double percentualCoelhos = (double)totalCoelhos / totalCobaias * 100.0;
    double percentualRatos = (double)totalRatos / totalCobaias * 100.0;
    double percentualSapos = (double)totalSapos / totalCobaias * 100.0;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentualCoelhos << " %" << endl;
    cout << "Percentual de ratos: " << percentualRatos << " %" << endl;
    cout << "Percentual de sapos: " << percentualSapos << " %" << endl;

    return 0;
}
