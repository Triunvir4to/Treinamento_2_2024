#include <iostream>
#include <cmath> // Para a função pow()

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A + B <= C || A + C <= B || B + C <= A) {
        cout << "Invalido" << endl;
    } else {
        if (A == B && B == C) {
            cout << "Valido-Equilatero" << endl;
        } else if (A == B || B == C || A == C) {
            cout << "Valido-Isoceles" << endl;
        } else {
            cout << "Valido-Escaleno" << endl;
        }

        if (pow(A, 2) + pow(B, 2) == pow(C, 2) ||
            pow(A, 2) + pow(C, 2) == pow(B, 2) ||
            pow(B, 2) + pow(C, 2) == pow(A, 2)) {
            cout << "Retangulo: S" << endl;
        } else {
            cout << "Retangulo: N" << endl;
        }
    }

    return 0;
}
