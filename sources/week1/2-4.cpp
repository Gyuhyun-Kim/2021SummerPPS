#include	<iostream>
using namespace std;

pair<char, int> c2n[8] = { {'A', 3}, {'D', 4}, {'G', 5}, {'J', 6}, {'M', 7}, {'P', 8}, {'T', 9}, {'W', 10} };

int char2num(char c) {
	for (int i = 0; i < 7; i++)
		if (c2n[i].first <= c && c2n[i + 1].first > c)
			return c2n[i].second;

	return 10;
}

int main() {
	string word;
	cin >> word;

	int secs = 0;

	for (int i = 0; i < word.size(); i++)
		secs += char2num(word[i]);

	cout << secs << endl;

	return 0;
}