#include <bits/stdc++.h>
using namespace std;

char op(const int &a, const int &b, const int &c) {
    if (a + b == c)
        return '+';
    if (a - b == c)
        return '-';
    if (a * b == c)
        return '*';
    return 'I';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    while (cin >> t) {
        vector<pair<string, bool>> players(t);
        vector<tuple<int, int, int, char>> exp(t);

        for (auto &e: exp) {
            string s;
            int &a = get<0>(e);
            int &b = get<1>(e);
            int &c = get<2>(e);

            cin >> a;
            getline(cin, s, '=');
            b = stoi(s);
            cin >> c;
            get<3>(e) = op(a, b, c);
        }

        int corrects = 0;
        for (auto &p: players) {
            int i;
            char c;
            cin >> p.first >> i >> c;
            p.second = (get<3>(exp[i - 1]) == c);
            if (p.second) corrects++;
        }

        if (corrects == t) {
            cout << "You Shall All Pass!\n";
        } else if (corrects == 0) {
            cout << "None Shall Pass!\n";
        } else {
            sort(players.begin(), players.end(), [](const pair<string, bool>& a, const pair<string, bool>& b) {
                return a.first < b.first;
            });

            bool first = true;
            for (const auto &p : players) {
                if (!p.second) {
                    if (!first) cout << " ";
                    cout << p.first;
                    first = false;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
