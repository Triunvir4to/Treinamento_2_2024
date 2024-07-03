#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> T(N);
    for (int i = 0; i < N; ++i) {
        cin >> T[i];
    }

    int minHits = numeric_limits<int>::max();
    int person = -1;

    for (int i = 0; i < N; ++i) {
        if (T[i] < minHits) {
            minHits = T[i];
            person = i + 1;
        }
    }

    cout << person << endl;

    return 0;
}
