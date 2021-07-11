#include    <iostream>
#include    <string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";

        string prev = countAndSay(n - 1);
        char prevc = prev[0];

        string result = "";
        int count = 0;
        for (int i = 0; i < prev.size(); i++) {
            if (prev[i] != prevc) {
                result += to_string(count);
                result.push_back(prevc);
                count = 1;
            }
            else count++;
        }

        result += to_string(count);
        result.push_back(prevc);
        return result;
    }
};