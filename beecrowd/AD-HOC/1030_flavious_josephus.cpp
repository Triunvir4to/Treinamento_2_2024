#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int n, k;
        cin >> n >> k;

        vector<int> circle;

        for (int j = 0; j < n; ++j)
            circle.push_back(1 + j);

        int erasePos = 0;
        while (circle.size() != 1) {
            erasePos += k - 1;
            erasePos %= circle.size();
            circle.erase(circle.begin() + erasePos);
        }

        cout << "Case " << i + 1 << ": " << circle[0] << endl;

    }
    return 0;
}