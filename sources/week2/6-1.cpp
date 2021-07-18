#include	<iostream>
#include	<queue>
using namespace std;

int main() {
	int num;
	queue<int> q;

	cin >> num;
	for (int i = 0; i < num; i++)
		q.push(i + 1);


	while (q.size() != 1) {
		q.pop();
		num = q.front();
		q.pop();
		q.push(num);
	}

	cout << q.front() << endl;

	return 0;
}