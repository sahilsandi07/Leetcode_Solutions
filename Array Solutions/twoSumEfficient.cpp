#include  <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr ={12,3,21,2,4};
    int target = 24;

    vector<pair<int,int>> res;

    for (int i=0; i<arr.size(); i++){
        res.push_back({arr[i],i});
    }

    sort (res.begin(), res.end());

    int start = 0, end = arr.size()-1;

    while (start < end){
        int sum = res[start].first + res[end].first;

        if (sum == target)  {
            cout << res[start].second <<" "<< res[end].second;
            break;
        }
        else if  (sum > target) end--;
        else start++;
    }

}