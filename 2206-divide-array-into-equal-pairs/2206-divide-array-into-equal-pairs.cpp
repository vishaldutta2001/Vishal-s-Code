class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2){
            int j=i+1;
            if(nums[i]!=nums[j]) return false;
        }
        return true;
    }
};