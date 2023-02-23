class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        int x=0;
        for (int i=0; i<arr.size(); i++){
            if (arr[i] == "--X" || arr[i] == "X--")
                --x;
            else
                x++;
        }
        return x;
    }
};