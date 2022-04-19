#include <iostream>
using namespace std;

int main() {
    int k,n,w;
    cin >> k;
    cin >> n;
    cin >> w;

    int total = 0;

    for (int i = 1; i <= w; i++) {
        total += i * k;
    }

    cout << (n <= total ? (total - n) : 0);
}