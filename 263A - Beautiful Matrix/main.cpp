#include <iostream>
using namespace std;

int main() {
    int target[2];
    bool found = false;

    for (int line = 1; line <= 5 && !found; line++) {
        for (int column = 1; column <= 5 && !found; column++) {
            bool value;
            cin >> value;

            if (value) {
                target[0] = line;
                target[1] = column;
                found = true;
            }
        }
    }

    cout << abs(3 - target[0]) + abs(3 - target[1]);
}
