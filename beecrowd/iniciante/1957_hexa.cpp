#include <bits/stdc++.h>

using namespace std;

int main (){
    int x; cin >> x;
    map<int, char> m = {
            {10, 'A'},
            {11, 'B'},
            {12, 'C'},
            {13, 'D'},
            {14, 'E'},
            {15, 'F'},
    };
    string hexString;

    do {
        int k = x % 16; x /= 16;
        if (k < 10)
            hexString += (char)('0' + k);
        else
            hexString += m[k];
    } while (x > 0);

    reverse(hexString.begin(), hexString.end());

    cout << hexString << "\n";

    return 0;
}
