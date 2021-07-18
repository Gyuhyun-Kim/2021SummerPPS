#include	<iostream>
#include	<algorithm>
#include	<utility>
#include	<vector>
using namespace std;

int main() {
	int tcase;
	cin >> tcase;

	vector<pair<int, int>> pos(tcase);

	for (int i = 0; i < tcase; i++)
		cin >> pos[i].first >> pos[i].second;

	sort(pos.begin(), pos.end());

	for (int i = 0; i < tcase; i++)
		cout << pos[i].first << ' ' << pos[i].second << "\n";

	return 0;
}