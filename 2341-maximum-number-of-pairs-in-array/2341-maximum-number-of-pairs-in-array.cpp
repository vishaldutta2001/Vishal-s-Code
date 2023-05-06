class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int pairCount=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            int j=i+1;
            if(nums[i]==nums[i+1]) {
                pairCount++;
                i++;
            }
        }
        int remaining = (nums.size()) - (2*pairCount) ;
        return {pairCount, remaining};
    }
};