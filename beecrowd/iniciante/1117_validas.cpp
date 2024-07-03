#include <iostream>

using namespace std;

int main (){
    double v = 0, sum = 0;

    while(v < 2){
        double n; cin >> n;
        if(n >= 0 && n <= 10){
            sum += n;
            ++v;
        }else cout << "nota invalida\n";
    }

    cout << "media = " << (double) sum / 2 << "\n";

    return 0;
}