#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        string sum;

        vector<int> res;

        for(int i=0; i<nums.size(); i++){
            sum += to_string(nums[i]);
        }

        int carry = k;
        for(int i=sum.size()-1; i>=0 || carry>0; i--){
            if(i>=0) carry += sum[i]-'0';
            res.push_back(carry%10);
            carry /= 10;
        }

        reverse(res.begin(),res.end());

        return res;
    }
};

int main() {
    Solution s;

    // Example usage
    vector<int> nums = {1,2,0,0};
    int k = 34;
    vector<int> result = s.addToArrayForm(nums, k);

    // Output the result
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
