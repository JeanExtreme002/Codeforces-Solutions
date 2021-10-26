#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int variable = 0;

	for (int i = 0; i < n; i++) {
		string instruction;
		cin >> instruction;

		variable += instruction == "X++" || instruction == "++X" ? 1 : -1;
	}
	cout << variable;
}
