class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt=0;
        int dp[201]={0};
        for(auto i:nums){
            dp[i]=i>=diff ? (dp[i-diff]+1) :(1);
            if(dp[i]>=3){
                cnt++;
            }//index - value
                //0 - 1  1 - 1  4 - 1+1(2) 6 -1  7 - 2+1(3) ....
        }
        return cnt;   
    }
};