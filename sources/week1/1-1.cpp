#include    <iostream>
using namespace std;

int main() {
    int num, past;

    cin >> past;
    for (int i = 0; i < 7; i++) {
        cin >> num;

        if (abs(num - past) != 1) {
            printf("mixed");
            return 0;
        }
        past = num;
    }

    if (num == 1)
        printf("descending");
    else
        printf("ascending");

    return 0;
}