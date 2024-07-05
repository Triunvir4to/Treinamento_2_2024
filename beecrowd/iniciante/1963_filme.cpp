#include <iostream>
#include <iomanip> // Biblioteca para manipular a precisão da saída

using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    double aumentoPercentual = ((B - A) / A) * 100;
    cout << fixed << setprecision(2) << aumentoPercentual << "%" << endl;

    return 0;
}
