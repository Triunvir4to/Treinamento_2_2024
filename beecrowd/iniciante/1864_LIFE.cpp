#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED, BUT A REALITY TO BE EXPERIENCED";

    if (N > quote.length())
        N = quote.length();

    for (int i = 0; i < N; i++)
        cout << quote[i];


    cout << endl;

    return 0;
}
