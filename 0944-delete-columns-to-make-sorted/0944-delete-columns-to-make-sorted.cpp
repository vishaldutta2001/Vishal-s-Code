class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt=0;
        for(int j=0;j<strs[0].size();j++){
            for(int i=0;i<strs.size()-1;i++){
                int k=i+1;
                if((strs[i][j]-'a') > (strs[k][j]-'a')){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};