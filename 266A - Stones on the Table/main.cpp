#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string input;
    cin >> input;

    char before = input[0];
    int count = 0;

    for (int i = 1; i < n; i++) {
        char character = input[i];

        if (character == before) {
            count++;
        }
        else {
            before = character;
        }
    }
    cout << count;
}