#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum = 0;
        int digit_sum = 0;

        for (int i=0; i<nums.size(); i++){
            ele_sum +=nums[i];
            while (nums[i] > 0){
                digit_sum += nums[i] % 10;
                nums[i] /= 10;
            }
        }

        return abs(ele_sum - digit_sum);
    }
};