#include	<iostream>
using namespace std;

char ceasar(char c) {
	c -= 3;
	if (c < 'A')
		c += 26;

	return c;
}

int main() {
	string code;
	cin >> code;

	string decode;

	for (int i = 0; i < code.size(); i++)
		decode.push_back(ceasar(code[i]));

	cout << decode << endl;

	return 0;
}