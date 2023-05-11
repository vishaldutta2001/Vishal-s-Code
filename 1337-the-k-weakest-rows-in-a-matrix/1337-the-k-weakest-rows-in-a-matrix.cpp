class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> fre(101,-2);
        int m=mat.size(), n=mat[0].size();
        for(int i=0;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    cnt++;
                }
                else{
                    break;
                }
            }
            fre[i]=cnt;
        }//0-2  1-4  2-1   3-2  4-5
        
        vector<int> res;
        while(k--){
            int min=INT_MAX,minIndex=0;
            int i=0;
            for(;i<101;i++){
                if(fre[i]==-2) break;
                if(fre[i]!=-1 && min>fre[i] ){
                    min=fre[i];
                    minIndex=i;
                }
                
            }
            res.push_back(minIndex);
            fre[minIndex]=-1;
        }
        return res;
    }
};