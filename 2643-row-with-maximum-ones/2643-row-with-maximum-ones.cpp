class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int r=0,c=0;
        for(int i=0;i<mat.size();i++){
            int counting=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) counting++;
            }
            if(c<counting){
                c=counting, r=i;
            }
        }
        return {r,c};
    }
};