#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    if (N < 2) {
        cout << 0 << endl;
        return 0;
    }


    bool valid = true;
    bool should_be_higher = (heights[1] > heights[0]);

    for (int i = 1; i < N; ++i) {
        if ((should_be_higher && heights[i] <= heights[i-1]) ||
            (!should_be_higher && heights[i] >= heights[i-1])) {
            valid = false;
            break;
            }
        should_be_higher = !should_be_higher;
    }

    cout << (valid ? 1 : 0) << endl;
    return 0;
}
