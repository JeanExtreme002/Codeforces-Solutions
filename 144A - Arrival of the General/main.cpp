#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min[] = {1000, -1};
    int max[] = {-1, -1};

    for (int position = 0; position < n; position++) {
        int height;
        cin >> height;

        if (height <= min[0]) {
            min[0] = height;
            min[1] = position;
        }

        if (height > max[0]) {
            max[0] = height;
            max[1] = position;
        }
    }

    cout << n - min[1] - 1 + max[1] - (min[1] < max[1] ? 1 : 0);
}
