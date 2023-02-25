/*
You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. You are also given a rule represented by two strings, ruleKey and ruleValue.

The ith item is said to match the rule if one of the following is true:

ruleKey == "type" and ruleValue == typei.
ruleKey == "color" and ruleValue == colori.
ruleKey == "name" and ruleValue == namei.
Return the number of items that match the given rule.

 

Example 1:

Input: items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], ruleKey = "color", ruleValue = "silver"
Output: 1
Explanation: There is only one item matching the given rule, which is ["computer","silver","lenovo"].
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt = 0;
        for (int i=0; i<items.size(); i++){
           
            if (ruleKey == "type"){
                if (items[i][0] == ruleValue){
                    cnt++;
                }
            }
            else if (ruleKey == "color"){
                if (items[i][1] == ruleValue){
                    cnt++;
                }
            }
            else{
                if (items[i][2] == ruleValue){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main(){

    vector<vector<string>> items = {{"phone","blue","pixel"},{"computer","silver","lenovo"},{"phone","gold","iphone"}};
    string ruleKey = "color";
    string ruleValue = "silver";

    Solution obj;
    cout << obj.countMatches(items, ruleKey, ruleValue);

}