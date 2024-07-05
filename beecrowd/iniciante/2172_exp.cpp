#include <iostream>

using namespace std;

int main() {
    int n;
    long long exp;
    while(cin >> n >> exp && n && exp) {
        exp *= n;
        cout << exp << "\n";
    }

    return 0;
}
