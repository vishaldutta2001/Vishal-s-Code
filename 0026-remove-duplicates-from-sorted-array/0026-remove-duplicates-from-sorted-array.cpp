class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=1;  //single element gives 1 length
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[unique]=nums[i];
                unique++;
            }
        }
        return unique;
            
    }
};