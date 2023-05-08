class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op=0;
        while(true){
            int count=0;
            int min=INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0 && min>nums[i]){
                    min=nums[i];
                }
                else{
                    count++;
                }
            }
            if(count==nums.size()) return op;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    nums[i]=nums[i]-min;
                }
            }
            op++;        
        }
    }
};