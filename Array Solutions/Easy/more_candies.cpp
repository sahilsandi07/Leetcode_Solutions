class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max = INT_MIN;
        
        for (int i=0; i<candies.size(); i++){
            if (max<=candies[i]) max = candies[i];
        }

        for (int i=0; i<candies.size(); i++){
            candies[i] = candies[i] + extraCandies;
            if (max <= candies[i]){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};