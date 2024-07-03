#include <bits/stdc++.h>

using namespace std;

int main(){
    double i = 0, j = 1;
    int counter = 0;

    while(i < 2.1){
        cout << "I=" << i << " J=" << j << "\n";
        ++counter;
        if(counter == 3){
            counter = 0;
            i += 0.2;
            j = 1 + i;
            continue;
        }
        ++j;
    }

    return 0;
}