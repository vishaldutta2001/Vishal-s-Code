class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=1, min=1000;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]) max=nums[i];
            if(min>nums[i]) min=nums[i];
        }
        int gcd=1;
        for(int i=1;i<=min;i++){
            if(min%i==0 && max%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
};