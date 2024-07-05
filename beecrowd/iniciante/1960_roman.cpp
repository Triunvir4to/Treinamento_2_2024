#include <bits/stdc++.h>

using namespace std;

string intToRoman(int num) {
    vector<pair<int, string>> values = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
    };
    string result;
    for (auto &value : values) {
        while (num >= value.first) {
            result += value.second;
            num -= value.first;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    cout << intToRoman(n) << "\n";

    return 0;
}
