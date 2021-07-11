#include    <iostream>
using namespace std;

class Solution {
public:
    string rebuild(string word) {
        string result = "";

        for (int i = 0; i < word.size(); i++) {
            if (word[i] != '#')
                result.push_back(word[i]);
            else if (result.size() != 0)
                result.pop_back();
        }

        return result;
    }

    bool backspaceCompare(string s, string t) {
        return rebuild(s) == rebuild(t);
    }
};