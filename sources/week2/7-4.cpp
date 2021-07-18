#include	<iostream>
#include	<algorithm>
#include	<string>
#include	<vector>
using namespace std;

int main() {
	string word;
	cin >> word;

	vector<string> suffix;
	for (int i = 0; i < word.size(); i++)
		suffix.push_back(word.substr(i, word.size()));

	sort(suffix.begin(), suffix.end());

	for (int i = 0; i < suffix.size(); i++)
		cout << suffix[i] << endl;

	return 0;
}