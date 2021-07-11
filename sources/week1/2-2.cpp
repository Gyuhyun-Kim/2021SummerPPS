#include <iostream>
using namespace std;

int main() {
    int tcase;

    cin >> tcase;

    for (int i = 0; i < tcase; i++) {
        string answ;
        cin >> answ;

        int count = 0, sum = 0;
        for (int i = 0; answ[i] != '\0'; i++) {
            if (answ[i] == 'X') {
                count = 0;
            }
            else {
                count++;
                sum += count;
            }
        }

        cout << sum << endl;
    }

    return 0;
}