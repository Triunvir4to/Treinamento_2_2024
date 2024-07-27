#include <iostream>
#include <vector>

using namespace std;

int main() {
    string mapping;
    int n;
    while (cin >> mapping) {
        cin >> n;
        vector<int> blinks(n);

        for (int i = 0; i < n; i++) {
            cin >> blinks[i];
        }

        string message = "";
        for (int idx : blinks) {
            message += mapping[idx - 1];
        }

        cout << message << endl;
    }
    return 0;
}
