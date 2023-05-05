class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        // int n=grid[0].size();
        int cases=grid[0].size();
        int sum=0;
        while(cases){
            vector<int> a(grid.size());
            int add;
            for(int i=0;i<grid.size();i++){
                // *min_element(grid[i].begin(),grid[i].end);
                int maxEleIndex=max_element(grid[i].begin(),grid[i].end())-grid[i].begin();
                int max=grid[i][maxEleIndex];
                grid[i][maxEleIndex]=0;
                a.push_back(max);
            }
            add=*max_element(a.begin(),a.end());
            sum+=add;
            cases--;
        }
        return sum;
    }
};