#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string curso;

    for (int i = 0; i < n; ++i)
        getline(cin >> ws, curso);

    cout << "Ciencia da Computacao" << endl;

    return 0;
}
