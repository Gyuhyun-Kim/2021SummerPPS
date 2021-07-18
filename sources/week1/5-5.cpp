#include    <iostream>
#include    <string>
#include    <vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n, "");

        for (int i = 0; i < n; i++) {
            if ((i + 1) % 3 == 0)       result[i].append("Fizz");
            if ((i + 1) % 5 == 0)       result[i].append("Buzz");
            if (result[i].empty())      result[i].append(to_string(i + 1));
        }

        return result;
    }
};