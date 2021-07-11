#include	<iostream>
using namespace std;

int main() {
	int max_s = 0;
	int max_idx = 0;

	for (int i = 1; i < 6; i++) {
		int score;
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			cin >> score;
			sum += score;
		}

		if (max_s < sum) {
			max_s = sum;
			max_idx = i;
		}
	}

	cout << max_idx << " " << max_s << endl;
}