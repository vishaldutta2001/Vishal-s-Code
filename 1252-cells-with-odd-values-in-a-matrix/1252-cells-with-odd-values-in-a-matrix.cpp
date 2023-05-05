class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> data(m, vector<int> (n,0));
        int cnt=0;
        for(int i=0;i<indices.size();i++){
            int r=indices[i][0], c=indices[i][1];
            for(int j=0;j<data[r].size();j++){
                data[r][j]++;
            }
            for(int k=0;k<data.size();k++){
                data[k][c]++;
            }
        }
        for(int i=0;i<data.size();i++){
            for(int j=0;j<data[i].size();j++){
                if(data[i][j]%2!=0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};