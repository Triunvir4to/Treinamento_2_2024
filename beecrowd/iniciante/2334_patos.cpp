#include <iostream>

using namespace std;

int main () {
    unsigned long long n;
    while(cin >> n && n != -1)
        cout << (n == 0 ? 0 : n - 1) << "\n";

}