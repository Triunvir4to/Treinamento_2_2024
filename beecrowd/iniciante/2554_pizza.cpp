#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    while (cin >> N >> D) {
        cin.ignore(); // Ignorar o newline após o número de datas
        string result = "Pizza antes de FdI";
        for (int i = 0; i < D; ++i) {
            string date;
            getline(cin, date, ' '); // Ler a data até o espaço
            bool allCanAttend = true;
            for (int j = 0; j < N; ++j) {
                int canAttend;
                cin >> canAttend;
                if (canAttend == 0) {
                    allCanAttend = false;
                }
            }
            cin.ignore(); // Ignorar o newline após os N inteiros
            if (allCanAttend && result == "Pizza antes de FdI") {
                result = date;
            }
        }
        cout << result << endl;
    }
    return 0;
}
