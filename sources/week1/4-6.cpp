#include    <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum;

        do {
            sum = 0;
            while (num != 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        } while (sum / 10 != 0);

        return sum;
    }
};