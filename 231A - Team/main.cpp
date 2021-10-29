#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;

    for (int i = 0; i < n; i++) {
        int know = 0;

        for (int p = 0; p < 3; p++) {
            int value;
            cin >> value;

            know += value;
        }

        if (know > 1) {
            total++;
        }
    }

    cout << total;
}
