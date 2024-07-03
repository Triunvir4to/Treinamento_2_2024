#include <bits/stdc++.h>

using namespace std;

int main(){
    int i = 1, j = 7, lastj = 7, counter = 0;

    while(i < 10){
        cout << "I=" << i << " J=" << j << "\n";
        ++counter;
        if(counter == 3){
            counter = 0;
            lastj += 2;
            j = lastj;
            i += 2;
            continue;
        }
        --j;
    }

    return 0;
}