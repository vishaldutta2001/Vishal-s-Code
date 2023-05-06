class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int fre[101]={0};
        int sum=0;
        for(int val:nums){
            sum+= ++fre[val]==1 ? (val) : (fre[val]==2 ? -val : 0);
        }
        return sum;
    }
};