#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int q = a / b;
    int r = a % b;

    if (r < 0) {
        r += abs(b);
        q = (a - r) / b;
    }

    cout << q << " " << r << endl;

    return 0;
}
