#include<bits/stdc++.h>
using namespace std;


void addToArrayForm(int num[], int k, int n) {
    int sum = 0;

    vector<int> res; 

    for(int i=0; i<n; i++){
        sum = sum*10 + num[i];   
    }
    //cout<<sum;

    int total_sum = sum + k;
    //cout << total_sum;
    
    while(total_sum > 0){
        int b = total_sum % 10;
        res.push_back(b);
        total_sum /= 10;
    }

    for (int i=res.size()-1; i>=0; i--){
        cout<<res[i]<<" ";
    }
    cout << endl;
}

int main(){

    int arr[] = {1,2,0,0};
    int k = 34;
    int n = sizeof(arr)/sizeof(arr[0]); 

    addToArrayForm (arr, k, n);

    

    return 0;
}