#include	<iostream>
using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {  
        string at = "";
        int count = 0;
        int min_rep = ceil((float)b.size() / a.size()) + 1;

        while (1) {
            if (at.find(b) != -1)
                return count;
            else if (count > min_rep)
                return -1;
            at += a;
            count++;
        }
    }
};