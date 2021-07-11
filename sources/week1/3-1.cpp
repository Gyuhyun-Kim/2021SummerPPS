#include	<iostream>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int Acount = 0;
        int Lcount = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                Lcount++;
                if (Lcount == 3)
                    return false;
            } else {
                Lcount = 0;
                if (s[i] == 'A')
                    Acount++;
            }
        }

        if (Acount > 1)
            return false;

        return true;
    }
};