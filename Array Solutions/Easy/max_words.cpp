class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        //no. of words = no. of spaces + 1
        int res = 0;

        for (int i=0; i<sentences.size(); i++){
            int cnt = 0;
            for (int j=0; j<sentences[i].length(); j++){
                if (sentences[i][j] == ' '){
                    cnt ++;
                }
            }
            res = max(res, cnt);
        }
        return res+1;
    }
};