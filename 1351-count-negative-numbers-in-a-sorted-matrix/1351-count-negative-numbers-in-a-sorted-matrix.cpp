class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        int count=0;
        int row=n-1, col=0;
        while(row>=0 && col<m){
            if(grid[row][col]<0){
                count+=m-col;
                row--;
            }
            else{
                col++;
            }
        }
        return count;
    }
};