#include <string>
using namespace std;

int addDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

bool solution(int x) {
    int addnum = addDigits(x);

    if (x % addnum == 0)
        return true;

    return false;
}