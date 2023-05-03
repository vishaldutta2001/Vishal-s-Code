class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            int leftSum=0,rightSum=0;
            if(i!=0){
                for(int j=i-1;j>=0;j--){
                    leftSum+=nums[j];
                }
            }
            
            if(i!=nums.size()-1){
                for(int k=i+1;k<nums.size();k++){
                    rightSum+=nums[k];
                }
            }
            ans[i]=abs(leftSum-rightSum);
        }
        return ans;
    }
};