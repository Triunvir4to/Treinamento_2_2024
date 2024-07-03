#include <iostream>

using namespace std;

int main(){
    int x; cin >> x;

    for(int i = 2; i < 10000; i += x)
        cout << i << "\n";

    return 0;
}