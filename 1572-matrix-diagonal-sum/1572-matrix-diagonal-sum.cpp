class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        int x=0,y=n-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j){
                    sum+=mat[i][j];
                    if(n%2!=0 && i==n/2 && j==n/2){
                        x++,y--;
                    }
                }else if(i==x && j==y){
                    sum+=mat[i][y];
                    x++,y--;
                }
                cout<<sum<<" ";
            }
        }
        return sum;
    }
};