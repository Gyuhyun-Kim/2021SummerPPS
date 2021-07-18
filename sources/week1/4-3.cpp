#include <iostream>
using namespace std;

int main() {
    int count[42] = { 0, };
    int total = 0;

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        if (count[num % 42]++ == 0)
            total++;
    }

    cout << total << endl;

    return 0;
}