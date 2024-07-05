#include <bits/stdc++.h>

using namespace std;

int main (){
    int n, m, x = 0, y = 0; cin >> n >> m;
    vector<vector<int>> map(n, vector(m, 0));

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> map[i][j];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(map[i][j] == 42 && i > 0 && i < n - 1 &&
                j > 0 && j < m - 1 &&
                map[i][j - 1] == 7 && map[i][j + 1] == 7
                && map[i - 1][j] == 7 &&
                map[i + 1][j] == 7 &&
                map[i + 1][j + 1] == 7 &&
                map[i + 1][j - 1] == 7 &&
                map[i - 1][j + 1] == 7 &&
                map[i - 1][j - 1] == 7){
                    x = 1 + i; y = 1 + j;
                    break;
            }
        }
    }

    cout << x << " " << y << "\n";

    return 0;
}