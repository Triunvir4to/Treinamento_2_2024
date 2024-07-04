#include <iostream>

using namespace std;

int main () {
    int n;
    while(cin >> n && n){
        while(n--){
            int x; cin >> x;
            cout << (x * 2) - (x % 2 ? 1 : 2) << "\n";
        }
    }
    return 0;
}