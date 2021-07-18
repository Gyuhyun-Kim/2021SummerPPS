#include	<iostream>
using namespace std;

int main() {
	int E, S, M;
	cin >> E >> S >> M;

	int num = E;
	if (S == 28)	S = 0;
	if (M == 19)	M = 0;

	while (num % 28 != S)
		num += 15;

	while (num % 19 != M)
		num += 15 * 28;

	cout << num << endl;

	return 0;
}