#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    int guesses[5];
    for (int i = 0; i < 5; ++i) {
        cin >> guesses[i];
    }

    int correctCount = 0;
    for (int i = 0; i < 5; ++i) {
        if (guesses[i] == T) {
            correctCount++;
        }
    }

    cout << correctCount << endl;

    return 0;
}
