#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int n; cin >> n;


    while(n--){
        double x, y; cin >> x >> y;
        if(y == 0)cout << "divisao impossivel\n";
        else cout << fixed << setprecision(1) <<  x / y << "\n";
    }
    return 0;
}