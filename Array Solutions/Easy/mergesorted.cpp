#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(int nums1[], int m, int nums2[], int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

        for(int i=0; i<m+n; i++){
            cout << nums1[i] <<" ";
        }
    }
};

int main(){
    int a[] = {1,4,6,7,0,0,0,0};
    int m = 4;
    int b[] = {2,9,12,14};
    int n = 4;

    Solution Obj;
    Obj.merge(a,m,b,n);
}
