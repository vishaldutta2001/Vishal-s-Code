class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0, n=nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        sort(nums.begin(),nums.end());
        int comp=0;
        for(int i=n-1;i>=0;i--){
            comp+=nums[i];
            res.push_back(nums[i]);
            if(comp>(sum-comp)){
                break;
            }
        }
        return res;
    }
};