#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int casos, H, M, O;
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        cin >> H >> M >> O;
        cout << setfill('0') << setw(2) << H << ":"
             << setfill('0') << setw(2) << M << " - ";

        if (O == 1) {
            cout << "A porta abriu!";
        } else {
            cout << "A porta fechou!";
        }
        cout << endl;
    }

    return 0;
}
