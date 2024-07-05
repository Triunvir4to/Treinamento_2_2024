#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int Xf, Yf, Xi, Yi, Vi, R1, R2;
    while (cin >> Xf >> Yf >> Xi >> Yi >> Vi >> R1 >> R2) {
        double dist = sqrt(pow(Xi - Xf, 2) + pow(Yi - Yf, 2));
        double Xi_new = Xi;
        double Yi_new = Yi;
        double t = 1.5;

        if (Vi > 0 && dist > 0) {
            Xi_new = Xi + (Vi * t) * ((Xi - Xf) / dist);
            Yi_new = Yi + (Vi * t) * ((Yi - Yf) / dist);
        }

        double final_dist = sqrt(pow(Xi_new - Xf, 2) + pow(Yi_new - Yf, 2));

        if (final_dist <= R1 + R2) {
            cout << 'Y' << endl;
        } else {
            cout << 'N' << endl;
        }
    }
    return 0;
}
