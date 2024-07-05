#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        unsigned long long T;
        cin >> T;
        if (T < 2015) {
            cout << (2015 - T) << " D.C." << endl;
        } else if (T == 2015) {
            cout << "1 A.C." << endl;
        } else {
            cout << (T - 2015 + 1) << " A.C." << endl;
        }
    }

    return 0;
}
