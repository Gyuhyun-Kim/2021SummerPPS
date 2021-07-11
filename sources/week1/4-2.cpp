#include	<iostream>
#include	<algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	int len = (a.size() > b.size()) ? a.size() : b.size();

	string result;

	int carry = 0;
	for (int i = 0; i < len; i++) {
		int anum = (i < a.size()) ? a[a.size() - i - 1] - '0' : 0;
		int bnum = (i < b.size()) ? b[b.size() - i - 1] - '0' : 0;

		int num = anum + bnum + carry;

		result.push_back(num % 10 + '0');
		carry = num / 10;
	}
	reverse(result.begin(), result.end());

	if (carry == 1)
		cout << carry;
	cout << result;

	return 0;
}