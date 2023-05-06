class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int> ans;
        for(int i=0;i<n-1;i++){
            int val=prices[i];
            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i]){
                    val-=prices[j];
                    break;
                }
            }
            ans.push_back(val);
        }
        ans.push_back(prices[n-1]);
        return ans;
    }
};