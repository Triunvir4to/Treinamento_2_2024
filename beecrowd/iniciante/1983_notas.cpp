#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int registration_number;
    double note, highest_note = -1.0;
    int best_student_registration = 0;

    for (int i = 0; i < n; i++) {
        cin >> registration_number >> note;

        if (note > highest_note) {
            highest_note = note;
            best_student_registration = registration_number;
        }
    }

    if (highest_note >= 8) {
        cout << best_student_registration << endl;
    } else {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}
