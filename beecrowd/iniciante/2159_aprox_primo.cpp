#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    long long n;
    cin >> n;

    double P = n / log(n);
    double M = 1.25506 * n / log(n);

    cout << fixed << setprecision(1) << P << " " << M << endl;

    return 0;
}
