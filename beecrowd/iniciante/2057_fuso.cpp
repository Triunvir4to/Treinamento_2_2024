#include <iostream>

using namespace std;

int calcularHoraChegada(int S, int T, int F) {
    int horaChegada = (S + T + F) % 24;
    if (horaChegada < 0)
        horaChegada += 24;

    return horaChegada;
}

int main() {
    int S, T, F;
    cin >> S >> T >> F;
    int resultado = calcularHoraChegada(S, T, F);
    cout << resultado << endl;
    return 0;
}
