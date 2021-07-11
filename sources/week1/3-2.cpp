#include	<iostream>
using namespace std;

int main() {
	string sentence;
	cin >> sentence;

	int size = sentence.size();

	for (int i = 0; i < size / 10; i++)
		cout << sentence.substr(i * 10, 10) << endl;
	cout << sentence.substr(size - size % 10, size % 10) << endl;

	return 0;
}