#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> lista(N);
    for (int i = 0; i < N; ++i) {
        cin >> lista[i];
    }

    int count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    for (int num : lista) {
        if (num % 2 == 0) ++count2;
        if (num % 3 == 0) ++count3;
        if (num % 4 == 0) ++count4;
        if (num % 5 == 0) ++count5;
    }

    cout << count2 << " Multiplo(s) de 2\n";
    cout << count3 << " Multiplo(s) de 3\n";
    cout << count4 << " Multiplo(s) de 4\n";
    cout << count5 << " Multiplo(s) de 5\n";

    return 0;
}
