#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    int N[1000];

    for (int i = 0; i < 1000; i++)
        N[i] = i % T;


    for (int i = 0; i < 1000; i++)
        cout << "N[" << i << "] = " << N[i] << endl;


    return 0;
}
