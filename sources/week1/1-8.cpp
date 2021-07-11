#include <vector>
#include <iostream>
using namespace std;

bool    checkPrime(int num) {
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;

    return true;
}

int     solution(vector<int> nums) {
    int answer = 0;
    int size = nums.size();

    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            for (int k = j + 1; k < size; k++)
                if (checkPrime(nums[i] + nums[j] + nums[k]))
                    answer++;

    return answer;
}