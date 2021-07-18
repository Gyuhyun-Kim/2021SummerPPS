#include	<iostream>
#include	<string>
using namespace std;

int main() {
	int tcase;
	cin >> tcase;

	for (int i = 0; i < tcase; i++) {
		double num;
		cin >> num;

		string oper;
		getline(cin, oper);

		for (int j = 0; j < oper.size(); j++) {
			if (oper[j] == '@')			num *= 3;
			else if (oper[j] == '%')	num += 5;
			else if (oper[j] == '#')	num -= 7;
		}

		cout << fixed;
		cout.precision(2);
		cout << num << endl;
	}

	return 0;
}