class Solution {
    static int uncrossedLines(vector<int> A,vector<int> B,int m,int n){
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(A[i-1]==B[j-1]){
                    dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        int res=uncrossedLines(nums1,nums2,m,n);
        return res;
    }
};