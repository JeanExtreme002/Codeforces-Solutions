#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    string expression;
    cin >> expression;

    int amount = ceil(expression.size() / 2.0);
    sort(expression.begin(), expression.end());

    for (int i = 0; i < amount; i++) {
        cout << expression[expression.size() - amount + i] << (i < amount - 1 ? "+" : "");
    }
}
