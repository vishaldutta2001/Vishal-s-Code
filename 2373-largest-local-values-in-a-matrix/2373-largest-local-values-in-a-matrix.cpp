class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> res(n-2, vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                for(int l1=i;l1<i+3;l1++){
                    for(int l2=j;l2<j+3;l2++){
                        res[i][j]=max(res[i][j], grid[l1][l2]);
                    }
                }
            }
        }
        return res;
    }
};