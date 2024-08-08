#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignorar a nova linha após o número N

    string question;
    for (int i = 0; i < N; ++i) {
        getline(cin, question);
        cout << "I am Toorg!" << endl;
    }

    return 0;
}
