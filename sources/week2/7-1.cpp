#include	<iostream>
#include	<algorithm>
#include	<vector>
using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main() {
	int tcase;
	cin >> tcase;

	vector<pair<int, string>> mem(tcase);
	for (int i = 0; i < tcase; i++)
		cin >> mem[i].first >> mem[i].second;

	stable_sort(mem.begin(), mem.end(), cmp);

	for (int i = 0; i < tcase; i++)
		cout << mem[i].first << ' ' << mem[i].second << '\n';

	return 0;
}