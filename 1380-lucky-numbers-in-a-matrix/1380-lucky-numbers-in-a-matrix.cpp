class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        set<int> rowMin;
        set<int> colMax;
        vector<int> res;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            int min=INT_MAX;
            for(int j=0;j<n;j++){
                if(min>matrix[i][j]) min=matrix[i][j];
            }
            rowMin.insert(min);
        }
        
        for(int j=0;j<n;j++){
            int max=INT_MIN;
            for(int i=0;i<m;i++){
                if(max<matrix[i][j]) max=matrix[i][j];
            }
            colMax.insert(max);
        }
        for(auto s:rowMin){
            if(colMax.count(s)){
                res.push_back(s);
            }
        }
        
        return res;
    }
};