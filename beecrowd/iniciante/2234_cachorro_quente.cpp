#include <iostream>
#include <iomanip>  // Para setprecision e fixed

using namespace std;

int main() {
    int H, P;
    cin >> H >> P;

    double media = static_cast<double>(H) / P;
    cout << fixed << setprecision(2) << media << endl;

    return 0;
}
