#include	<iostream>
using namespace std;

bool open(int iter, int init) {
	int method = init;
	for (int i = 0; i < iter; i++) {
		if (i % 3 == 2 && method != init)
			return false;
		method = (method == 1) ? 0 : 1;
	}

	return true;
}

int main() {
	int iter;
	cin >> iter;
	
	int method;
	cin >> method;

	int print = method;

	if (!open(iter, method))
		cout << "Love is open door" << endl;
	else
		for (int i = 0; i < iter - 1; i++) {
			print = (print == 1) ? 0 : 1;
			cout << print << endl;
		}
}