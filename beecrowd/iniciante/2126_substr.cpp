#include <iostream>
#include <string>

using namespace std;

int main() {
    string N1, N2;
    int caso = 1;

    while (cin >> N1 >> N2) {
        int count = 0;
        size_t lastPos = 0;
        size_t pos = N2.find(N1);

        while (pos != string::npos) {
            count++;
            lastPos = pos;
            pos = N2.find(N1, pos + 1);
        }

        cout << "Caso #" << caso++ << ":\n";
        if (count > 0) {
            cout << "Qtd.Subsequencias: " << count << "\n";
            cout << "Pos: " << lastPos + 1 << "\n";
        } else {
            cout << "Nao existe subsequencia\n";
        }
        cout << endl;
    }

    return 0;
}
