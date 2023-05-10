class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int> (n,0));
        int row=n,col=n;
        int val=1;
        int total=n*n;
        int startingRow=0;
        int startingCol=0;
        int endingRow=n-1;
        int endingCol=n-1;
        while(val<=total){
            for(int i=startingCol;i<=endingCol && val<=total;i++){
                res[startingRow][i]=val;
                val++;
            }
            startingRow++;
            for(int i=startingRow;i<=endingRow && val<=total;i++){
                res[i][endingCol]=val;
                val++;
            }
            endingCol--;
            for(int i=endingCol;i>=startingCol && val<=total;i--){
                res[endingRow][i]=val;
                val++;
            }
            endingRow--;
            for(int i=endingRow;i>=startingRow && val<=total;i--){
                res[i][startingCol]=val;
                val++;
            }
            startingCol++;
        }
        return res;
    }
};