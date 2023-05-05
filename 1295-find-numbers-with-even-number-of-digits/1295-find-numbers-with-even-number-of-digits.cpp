class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int digits=0,number=nums[i];
            while(number){
                number/=10;
                digits=digits+1;
            }
            if(digits%2==0) cnt++;
        }
        return cnt;
    }
};