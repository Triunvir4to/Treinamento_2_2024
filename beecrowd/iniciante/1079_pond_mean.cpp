#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int n; cin >> n;
    int w[] = {2, 3, 5};
    while(n--){
        double a, b, c;
        cin >> a >> b >> c;
        cout << fixed << setprecision(1) <<  (a * w[0] + b * w[1] + c * w[2]) / 10 << "\n";
    }


    return 0;
}