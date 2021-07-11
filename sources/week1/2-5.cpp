#include	<iostream>
using namespace std;

int main() {
	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
		word[i] = toupper(word[i]);

	int alph[26] = { 0 };
	for (int i = 0; i < word.size(); i++)
		alph[word[i] - 'A']++;

	int max = 0, max_idx,  max_n = 0;
	for (int i = 0; i < 26; i++) {
		if (alph[i] > max) {
			max = alph[i];
			max_idx = i;
			max_n = 0;
		}
		else if (alph[i] == max)
			max_n++;
	}

	char result = max_idx + 'A';

	if (max_n == 0)
		cout << result << endl;
	else
		cout << '?' << endl;

	return 0;
}