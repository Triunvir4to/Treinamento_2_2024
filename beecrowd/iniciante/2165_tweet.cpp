#include <iostream>

using namespace std;

int main (){
    string a;
    getline(cin, a);

    cout << (a.length() > 140 ? "MUTE" : "TWEET") << "\n";

    return 0;
}