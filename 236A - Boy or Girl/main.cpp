#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int max = 0;
    char chars[100];

    for (int index = 0; index < input.length(); index++) {
        char character = input[index];
        bool found = false;

        for (int i = 0; i < max; i++) {
            if (chars[i] == character) {
                found = true;
                break;
            }
        }

        if (!found) {
            chars[max++] = character;
        }
    }

    cout << (max % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
}