#include	<iostream>
using namespace std;

int isGroup(string word) {
	char past = '0';
	string chars;

	for (int i = 0; i < word.size(); i++) {
		if (past != word[i]) {
			for (int j = 0; j < chars.size(); j++)
				if (chars[j] == word[i]) return 0;
			past = word[i];
			chars.push_back(word[i]);
		}
	}

	return 1;
}

int main() {
	int iter;
	cin >> iter;

	int num = 0;

	for (int i = 0; i < iter; i++) {
		string word;
		cin >> word;

		num += isGroup(word);
	}

	cout << num << endl;

	return 0;
}