#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;

        for (int i=0; i<nums1.size(); i++){
            mp[nums1[i]]++;
        }

        for (int i=0; i<nums2.size(); i++){
            if (mp[nums2[i]] > 0){
                mp[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        for (auto x : ans){
            cout << x << " ";
        }
    }
};

int main(){

    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    Solution obj;
    obj.intersect(nums1,nums2);
    return 0;
}