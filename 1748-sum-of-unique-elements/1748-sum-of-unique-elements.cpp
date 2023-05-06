class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int fre[101]={0};
        int sum=0;
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        for(int i=1;i<101;i++){
            if(fre[i]==1) sum+=i;
        }
        return sum;
    }
};