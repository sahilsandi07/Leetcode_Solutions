/*
An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), the string representation of the integer n in base b is palindromic.

Given an integer n, return true if n is strictly palindromic and false otherwise.

A string is palindromic if it reads the same forward and backward.

Example 1:

Input: n = 9
Output: false
Explanation: In base 2: 9 = 1001 (base 2), which is palindromic.
In base 3: 9 = 100 (base 3), which is not palindromic.
Therefore, 9 is not strictly palindromic so we return false.
Note that in bases 4, 5, 6, and 7, n = 9 is also not palindromic.
Example 2:

Input: n = 4
Output: false
Explanation: We only consider base 2: 4 = 100 (base 2), which is not palindromic.
Therefore, we return false.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int b = 2; b <= n - 2; ++b) {
            string s = convertToBase(n, b);
            if (!isPalindrome(s)) {
                return false;
            }
        }
        return true;
    }
    
private:
    string convertToBase(int n, int b) {
        string s;
        while (n > 0) {
            s.push_back('0' + n % b);
            n /= b;
        }
        reverse(s.begin(), s.end());
        return s;
    }
    
    bool isPalindrome(const string& s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            ++i;
            --j;
        }
        return true;
    }
};

int main (){
    cout << "Enter Value of n: " << endl;
    int n;
    cin >> n;
    Solution obj;
    if (obj.isStrictlyPalindromic(n) == true){
        cout << n << " Is Strictly Palindromic." <<endl;
    }
    else{
        cout << n << " Is Not Strictly Palindromic." <<endl;
    }
}
