#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int sum = 0;
    int count = 0;

    while (count < 3) {
        getline(cin, input);

        if (input == "caw caw") {
            cout << sum << endl;
            sum = 0;
            count++;
        } else {
            int num = 0;
            if (input[0] == '*') num += 4;
            if (input[1] == '*') num += 2;
            if (input[2] == '*') num += 1;

            sum += num;
        }
    }

    return 0;
}
