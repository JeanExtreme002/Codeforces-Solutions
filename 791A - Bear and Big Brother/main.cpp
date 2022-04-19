#include <iostream>
using namespace std;

int main() {
    float a,b;
    cin >> a;
    cin >> b;

    int years = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years;
}