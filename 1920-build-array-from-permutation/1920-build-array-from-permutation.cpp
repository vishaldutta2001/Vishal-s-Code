class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
       //5 0 1 2 3 4
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+n*(nums[nums[i]]%n);
        }//29 30 1 8 15 22
        for(int i=0;i<n;i++){
            nums[i]=nums[i]/n;
        }//4 5 0 1 2 3
        return nums;
    }
};