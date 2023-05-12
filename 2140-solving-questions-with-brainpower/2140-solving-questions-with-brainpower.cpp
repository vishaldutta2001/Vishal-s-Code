class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        //bottom -up approach
        int n=questions.size();
        vector<long long> dp(n+1,0);
        for(int i=n-1;i>=0;i--){
            int price=questions[i][0], jump=questions[i][1];
            dp[i]=max(price+dp[min(i+jump+1,n)],dp[i+1]);
        }
        return dp[0];
    }
};