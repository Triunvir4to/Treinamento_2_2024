#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    while (cin >> S) {
        int count = 0;
        for (char &c : S) {
            if (c == '1')
                count++;
        }

        if (count % 2 == 0) {
            S += '0';
        } else {
            S += '1';
        }

        cout << S << endl;
    }

    return 0;
}
