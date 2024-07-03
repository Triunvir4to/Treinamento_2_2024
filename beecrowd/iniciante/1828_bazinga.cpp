#include <iostream>
#include <string>
#include <map>

using namespace std;


string determineWinner(const string& sheldon, const string& raj) {
    if (sheldon == raj)
        return "De novo!";


    map<string, map<string, bool>> wins;
    wins["tesoura"] = {{"papel", true}, {"lagarto", true}};
    wins["papel"] = {{"pedra", true}, {"Spock", true}};
    wins["pedra"] = {{"lagarto", true}, {"tesoura", true}};
    wins["lagarto"] = {{"Spock", true}, {"papel", true}};
    wins["Spock"] = {{"tesoura", true}, {"pedra", true}};

    if (wins[sheldon][raj])
        return "Bazinga!";
    else
        return "Raj trapaceou!";

}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        string sheldon, raj;
        cin >> sheldon >> raj;
        cout << "Caso #" << t << ": " << determineWinner(sheldon, raj) << endl;
    }

    return 0;
}
