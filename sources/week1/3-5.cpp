#include	<iostream>
#include	<tuple>
using namespace std;

tuple<float, float> feeling(int days, tuple<float, float> init, tuple<float, float, float, float> possib) {
	if (days == 0)
		return init;
	
	tuple<float, float> yest = feeling(days - 1, init, possib);
	float g = get<0>(yest) * get<0>(possib) + get<1>(yest) * get<2>(possib);
	float b = get<0>(yest) * get<1>(possib) + get<1>(yest) * get<3>(possib);

	return make_tuple(g, b);
}

int main() {
	int days;
	cin >> days;

	int now;
	cin >> now;

	tuple<float, float> today;
	if (now == 1)
		today = make_tuple(0.0, 1.0);
	else
		today = make_tuple(1.0, 0.0);

	float gg, gb, bg,bb;
	cin >> gg >> gb >> bg >> bb;
	tuple<float, float, float, float> possib = make_tuple(gg, gb, bg, bb);

	tuple<float, float> feel = feeling(days, today, possib);
	cout << (int)(get<0>(feel) * 1000) << endl;
	cout << (int)(get<1>(feel) * 1000) << endl;

	return 0;
}