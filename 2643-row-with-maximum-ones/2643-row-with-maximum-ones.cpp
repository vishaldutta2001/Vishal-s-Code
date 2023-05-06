class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int r=0,c=0;
        vector<int> res;
        for(int i=0;i<mat.size();i++){
            int counting=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) counting++;
            }
            if(c<counting){
                c=counting, r=i;
            }
        }
        res.push_back(r);
        res.push_back(c);
        return res;
    }
};