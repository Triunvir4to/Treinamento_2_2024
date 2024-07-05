#include <iostream>
#include <iomanip>

using namespace std;


double calcularRaizQuadrada(int N) {
    if (N == 0)
        return 3.0;

    double resultado = 6.0;

    for (int i = 1; i < N; i++)
        resultado = 6.0 + (1.0 / resultado);

    resultado = 3.0 + (1.0 / resultado);

    return resultado;
}

int main() {
    int N;
    cin >> N;

    double raiz = calcularRaizQuadrada(N);

    cout << fixed << setprecision(10) << raiz << endl;

    return 0;
}
