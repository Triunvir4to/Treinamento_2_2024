#include <iostream>
#include <vector>

using namespace std;

int main() {
    int mes, dia;
    vector<int> diasPorMes = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int natalMes = 12, natalDia = 25;

    while (cin >> mes >> dia) {
        if (mes == natalMes && dia == natalDia) {
            cout << "E natal!" << endl;
        } else if (mes == natalMes && dia == natalDia - 1) {
            cout << "E vespera de natal!" << endl;
        } else if (mes == natalMes && dia > natalDia) {
            cout << "Ja passou!" << endl;
        } else {
            int totalDias = 0;
            totalDias += diasPorMes[mes] - dia;
            for (int i = mes + 1; i < natalMes; ++i) {
                totalDias += diasPorMes[i];
            }
            totalDias += natalDia;
            cout << "Faltam " << totalDias << " dias para o natal!" << endl;
        }
    }

    return 0;
}
