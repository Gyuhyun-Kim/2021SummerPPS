#include    <iostream>
#include    <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        else {
            unsigned int num = strs.size();
            int idx = 0;

            for (int i = 0; i < 200; i++) {
                for (int j = 0; j < num - 1; j++) {
                    if (strs[j][i] == '\0' || strs[j][i] != strs[j + 1][i])
                        return strs[0].substr(0, idx);
                }
                idx++;
            }
        }
        return strs[0];
    }
};