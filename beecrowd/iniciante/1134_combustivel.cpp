#include <iostream>

using namespace std;

int main() {
    int codigo;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    while (true) {
        cin >> codigo;
        if (codigo == 1) {
            alcool++;
        } else if (codigo == 2) {
            gasolina++;
        } else if (codigo == 3) {
            diesel++;
        } else if (codigo == 4) {
            break;
        } else {
            continue;
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}
