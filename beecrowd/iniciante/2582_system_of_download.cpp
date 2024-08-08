#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> musicMap = {
            {0, "PROXYCITY"},
            {1, "P.Y.N.G."},
            {2, "DNSUEY!"},
            {3, "SERVERS"},
            {4, "HOST!"},
            {5, "CRIPTONIZE"},
            {6, "OFFLINE DAY"},
            {7, "SALT"},
            {8, "ANSWER!"},
            {9, "RAR?"},
            {10, "WIFI ANTENNAS"}
    };

    int C;
    cin >> C;

    for (int i = 0; i < C; ++i) {
        int X, Y;
        cin >> X >> Y;
        int sum = X + Y;
        cout << musicMap[sum] << endl;
    }

    return 0;
}
