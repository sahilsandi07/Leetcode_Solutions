#include<bits/stdc++.h>
using namespace std;

bool isHappy(int n) {
    unordered_set<int> visited; // initialize a set to keep track of visited numbers
    while (n != 1) {
        int sum = 0;
        while (n != 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        if (visited.count(sum)) { // if sum has already been visited, there is a cycle
            return false;
        }
        visited.insert(sum); // add sum to visited set
        n = sum; // set n to sum for next iteration
    }
    return true; // n is 1, so it is a happy number
}

int main(){
    int n = 19;
    cout << isHappy(19) << endl;
    return 0;
}