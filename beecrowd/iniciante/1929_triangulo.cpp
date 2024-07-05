#include <bits/stdc++.h>

using namespace std;

bool pode_formar_triangulo(int x, int y, int z) {
    return (x + y > z) && (x + z > y) && (y + z > x);
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (pode_formar_triangulo(A, B, C) ||
        pode_formar_triangulo(A, B, D) ||
        pode_formar_triangulo(A, C, D) ||
        pode_formar_triangulo(B, C, D)) {
        cout << 'S' << endl;
    } else {
        cout << 'N' << endl;
    }

    return 0;
}