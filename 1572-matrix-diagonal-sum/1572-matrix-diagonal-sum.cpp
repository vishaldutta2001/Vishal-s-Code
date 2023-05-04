class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int x=0; //primary diagonal sum
        int y=0; //secondary diagonal sum
        for(int i=0;i<mat.size();i++){
            x+=mat[i][i];
            y+=mat[i][n-i-1];
        }
        if(n%2==0){
            return x+y;
        }
        return x+y-mat[n/2][n/2];
            
    }
};