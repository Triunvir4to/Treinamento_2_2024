#include <iostream>

using namespace std;

char determinarConceito(int nota) {
    if (nota >= 86) return 'A';
    else if (nota >= 61) return 'B';
    else if (nota >= 36) return 'C';
    else if (nota >= 1) return 'D';
    else return 'E';
}

int main() {
    int nota;
    cin >> nota;
    char conceito = determinarConceito(nota);
    cout << conceito << endl;

    return 0;
}
