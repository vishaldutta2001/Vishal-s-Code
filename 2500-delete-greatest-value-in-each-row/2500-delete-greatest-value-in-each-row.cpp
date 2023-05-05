class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0, col=grid[0].size(), row=grid.size();
        for(auto &it:grid){
            sort(it.begin(),it.end());
        }
        for(int j=0;j<col;j++){
            int maxi=0;
            for(int i=0;i<row;i++){
                maxi=max(maxi,grid[i][j]);
            }
            ans+=maxi;
        }
        return ans;
    }
};