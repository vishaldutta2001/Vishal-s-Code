class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int small,big;
        vector<int> res;
        int col;
        int m=matrix.size(),n =matrix[0].size();
        for(int i=0;i<m;i++){
            small=INT_MAX;
            col=0;
            for(int j=0;j<n;j++){
                if(small>matrix[i][j]){
                    small=matrix[i][j];
                    col=j;
                } 
            }
            big=small;
            for(int j=0;j<m;j++){
                if(big<matrix[j][col]){
                    big=matrix[j][col];
                }
            }
            if(small==big){
                res.push_back(small);
            }
        }
        return res;
    }
};