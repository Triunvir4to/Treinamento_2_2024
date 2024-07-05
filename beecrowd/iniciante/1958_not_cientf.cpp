#include <bits/stdc++.h>
using namespace std;

int main() {
    double x;

    cin >> x;
    char signMantissa = to_string(x)[0] == '-' ? '-' : '+';

    cout << signMantissa;

    if (x == 0) {
        cout << "0.0000E+00" << endl;
        return 0;
    }

    int exponent = (int) floor(log10(abs(x)));
    double mantissa = x / pow(10, exponent);

    cout << fixed << setprecision(4)
         << abs(mantissa) << "E"
         << (exponent >= 0 ? "+" : "-") << (abs(exponent) < 10 ? "0" : "")
         << abs(exponent) << endl;

    return 0;
}
