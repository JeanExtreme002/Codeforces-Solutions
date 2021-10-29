#include <iostream>
using namespace std;

int main() {
    int weight;
    cin >> weight;

    cout << (weight % 2 == 0 && weight > 2 ? "YES" : "NO");
}
