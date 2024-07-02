#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string label;
    int startDay, endDay;
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;

    cin >> label >> startDay;
    cin >> startHour >> label >> startMinute >> label >> startSecond;

    cin >> label >> endDay;
    cin >> endHour >> label >> endMinute >> label >> endSecond;

    int totalStartSeconds = startSecond + startMinute*60 + startHour*3600 + startDay*86400;
    int totalEndSeconds = endSecond + endMinute*60 + endHour*3600 + endDay*86400;

    int durationSeconds = totalEndSeconds - totalStartSeconds;

    int days = durationSeconds / 86400; durationSeconds %= 86400;
    int hours = durationSeconds / 3600; durationSeconds %= 3600;
    int minutes = durationSeconds / 60;
    int seconds = durationSeconds % 60;

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
