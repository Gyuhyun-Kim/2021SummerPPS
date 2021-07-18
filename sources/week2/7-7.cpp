#include	<iostream>
#include	<algorithm>
#include	<vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> nums(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];

	sort(nums.begin(), nums.end());

	cout << nums[k - 1] << endl;

	return 0;
}