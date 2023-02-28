#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) return 1;
        int total_sum = 0;  // sum of all elements from 1 to n
        for (int i=1; i<=n; i++){
            total_sum += i;
        }
    
        int left_sum = 0, right_sum = 0;
        for (int x = 1; x <= n; x++) {
            left_sum += x;
            
            if (left_sum == right_sum) {
                return x;
            }

            right_sum = total_sum - left_sum;
        }
        
        return -1;  // no pivot integer found
    }
};

int main(){
    int n;
    cin >> n;
    Solution obj;
    cout <<"Pivot Integer is : " << obj.pivotInteger(n);
    return 0;
}