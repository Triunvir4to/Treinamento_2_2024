#include <iostream>

using namespace std;

int main (){
    int n, i = 1, last = -1; cin >> n;
    while(n--){
       int x; cin >> x;
       if(x < last){
           cout << i << "\n";
           return 0;
       }
        last = x;
       ++i;
    }

    cout << 0 << "\n";

    return 0;
}