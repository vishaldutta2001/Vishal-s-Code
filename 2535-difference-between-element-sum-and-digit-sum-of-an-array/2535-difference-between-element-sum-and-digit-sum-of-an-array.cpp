class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0;
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            elementSum+=nums[i];
            int data=nums[i];
            int value=0;
            while(data){
                int rem=data%10;
                data/=10;
                value+=rem;
            }
            digitSum+=value;
        }
        return abs(elementSum-digitSum);
    }
};