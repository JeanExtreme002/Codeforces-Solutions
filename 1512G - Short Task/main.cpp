#include <iostream>
using namespace std;

#define endl "\n"

int sums[10000001];
int n_values[10000001];

int main() {
	// Configuração para aumentar a performance do input e output.
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// Obtém todos os inputs, verificando qual deles é o maior valor.
	int length;
	cin >> length;

	int values[length];
	int max_value = 0;

	for (int i = 0; i < length; i++) {
		int value;
		cin >> value;

		if (value > max_value) {
			max_value = value;
		}
		values[i] = value;
	}

	// Calcula todas as somas possíveis, utilizando os valores N como índices.
	for (int divider = 1; divider <= max_value; divider++) {
		for (int n = divider; n <= max_value; n += divider) {
			sums[n] += divider;
		}
	}

	// Adiciona ao array todos os N valores, utilizando as somas como índices.
	for (int n = 1; n <= max_value; n++) {
		int sum = sums[n];

		if (sum > max_value) {
			continue;
		}

		int old_value = n_values[sum];

		if (old_value == 0 || old_value > n) {
			n_values[sum] = n;
		}
	}

	// Mostra os resultados.
	for (int value : values) {
		int result = n_values[value];

		if (result == 0) {
			result = -1;
		}
		cout << result << endl;
	}
}
