#include    <iostream>
#include    <string>
using namespace std;

class Solution {
public:
    bool isLunar(int year) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0)    return true;
                return false;
            }
            return true;
        }

        return false;
    }

    int dayOfYear(string date) {
        int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int year, mon, day, count = 0;

        year = stoi(date.substr(0, 4));
        mon = stoi(date.substr(5, 2));
        day = stoi(date.substr(8, 2));

        if (isLunar(year))
            days[2] = 29;

        for (int i = 1; i < mon; i++)
            count += days[i];
        count += day;

        return count;
    }
};