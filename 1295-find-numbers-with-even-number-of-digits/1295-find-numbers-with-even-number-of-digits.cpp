class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int val=(int)log10(nums[i]);//0-9 0  10-99 1
            cout<<val<<" ";
            if(val%2!=0) cnt++;
        }
        return cnt;
    }
};