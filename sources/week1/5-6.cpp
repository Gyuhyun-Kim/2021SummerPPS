#include	<iostream>
#include    <string>
using namespace std;

class Solution {
public:
    string rearrange(string s) {
        string result;

        for (int i = 0; i < s.size(); i++)
            if (isalnum(s[i]))
                result += tolower(s[i]);

        return result;
    }

    bool isPalindrome(string s) {
        s = rearrange(s);

        for (int i = 0; i < s.size() / 2; i++)
            if (s[i] != s[s.size() - 1 - i])    return false;

        return true;
    }
};