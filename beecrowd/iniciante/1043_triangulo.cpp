#include <bits/stdc++.h>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if ((A + B > C) && (A + C > B) && (B + C > A)) {
        double perimetro = A + B + C;
        cout << "Perimetro = " << std::fixed << std::setprecision(1) << perimetro << std::endl;
    } else {
        double area = ((A + B) * C) / 2.0;
        cout << "Area = " << std::fixed << std::setprecision(1) << area << std::endl;
    }

    return 0;
}