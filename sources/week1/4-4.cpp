#include <iostream>
using namespace std;

int total(int k, int n) {
	int sum = 0;

	if (k == 0)
		return n;
	else {
		for (int i = 0; i < n; i++)
			sum += total(k - 1, n - i);

		return sum;
	}

}

int main() {
	int tcase;
	cin >> tcase;

	for (int i = 0; i < tcase; i++) {
		int k, n;
		cin >> k >> n;

		cout << total(k, n) << endl;
	}

	return 0;
}