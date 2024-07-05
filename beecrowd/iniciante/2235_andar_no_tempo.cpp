#include <iostream>
#include <cmath> // Para usar abs()

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A == 0 || B == 0 || C == 0) {
        cout << "S" << endl;
        return 0;
    }

    if ((A + B) == 0 || (A + C) == 0 || (B + C) == 0 ||
        abs(A - B) == 0 || abs(A - C) == 0 || abs(B - C) == 0) {
        cout << "S" << endl;
        return 0;
    }

    if ((A + B + C) == 0 || abs(A + B - C) == 0 || abs(A - B + C) == 0 || abs(-A + B + C) == 0) {
        cout << "S" << endl;
        return 0;
    }

    cout << "N" << endl;
    return 0;
}
