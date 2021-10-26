#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	string first, second;
	cin >> first >> second;

	int result = 0;

	for (int i = 0; i < first.size() && !result; i++) {
		char char_id_1 = tolower(first[i]);
		char char_id_2 = tolower(second[i]);

		if (char_id_1 < char_id_2) {
			result = -1;
		}
		else if (char_id_1 > char_id_2) {
			result = 1;
		}
	}

	cout << result;
}
