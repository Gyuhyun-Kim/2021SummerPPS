#include	<iostream>
using namespace std;

string sweep(string word) {
	for (int i = 0; i < word.size(); i++) {
		word[i]++;
		if (word[i] > 'Z')
			word[i] = 'A';
	}

	return word;
}

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		string com;
		cin >> com;
		cout << "String #" << i + 1 << endl;
		cout << sweep(com) << endl << endl;
	}

	return 0;
}