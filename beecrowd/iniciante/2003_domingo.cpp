#include <iostream>
#include <string>

using namespace std;

int main() {
    string time;
    while (cin >> time) {
        int hour = stoi(time.substr(0, time.find(':')));
        int minute = stoi(time.substr(time.find(':') + 1));
        int arrival_time = hour * 60 + minute + 60;
        int meeting_time = 8 * 60;

        int delay = arrival_time - meeting_time;
        if (delay < 0) delay = 0;

        cout << "Atraso maximo: " << delay << endl;
    }
    return 0;
}
