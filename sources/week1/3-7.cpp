#include	<iostream>
#include    <vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int money[21] = { 0 };
        for (int i = 0; i < bills.size(); i++) {
            money[bills[i]]++;
            if (bills[i] == 10) {
                if (money[5] < 1)
                    return false;
                money[5]--;
            }
            else if (bills[i] == 20) {
                if (money[5] > 0 && money[10] > 0) {
                    money[5]--;
                    money[10]--;
                }
                else if (money[5] > 2)
                    money[5] -= 3;
                else
                    return false;
            }
        }
        return true;
    }
};