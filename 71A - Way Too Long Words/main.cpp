#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;

		cout << (word.size() > 10 ? word[0] + to_string(word.size() - 2) + word[word.size() - 1] : word) << "\n";
	}
}
