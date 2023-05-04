class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int op=k;
        int sum=0;
        while(op){
            int max=nums[nums.size()-1];
            nums[nums.size()-1]=nums[nums.size()-1]+1;
            sum+=max;
            op--;
        }
        return sum;
    }
};