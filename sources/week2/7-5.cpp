#include	<iostream>
#include	<algorithm>
using namespace std;

int main() {
	string num_s;
	cin >> num_s;

	sort(num_s.begin(), num_s.end(), greater<char>());

	cout << num_s << endl;

	return 0;
}