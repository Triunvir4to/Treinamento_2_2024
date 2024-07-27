#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, n;
    while(cin >> c >> n && c && n){
        cin.ignore();
        string a, b;
        unordered_map<char, char> keyMap;

        getline(cin, a);
        getline(cin, b);

        for(int i = 0; i < c; ++i){
            keyMap[a[i]] = b[i];
            keyMap[b[i]] = a[i];
            keyMap[toupper(a[i])] = toupper(b[i]);
            keyMap[toupper(b[i])] = toupper(a[i]);
            keyMap[tolower(a[i])] = tolower(b[i]);
            keyMap[tolower(b[i])] = tolower(a[i]);
        }

        while(n--){
            string s;
            getline(cin, s);
            for(int i = 0; i < s.length(); ++i){
                if(keyMap.find(s[i]) != keyMap.end())
                    s[i] = keyMap[s[i]];
            }
            cout << s << "\n";
        }
        cout << "\n";
    }
    return 0;
}
