#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        if (a == 0) {
            cout << "NULL";
        } else {
            if (a % 2 == 0)
                cout << "EVEN ";
            else
                cout << "ODD ";

            if (a > 0)
                cout << "POSITIVE";
            else
                cout << "NEGATIVE";

        }

        cout << "\n";
    }

    return 0;
}
