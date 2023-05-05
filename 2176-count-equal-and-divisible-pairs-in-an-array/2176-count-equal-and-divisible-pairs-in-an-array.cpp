class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int cnt=0, s=0, e=nums.size()-1;
        while(s<e){
            if(nums[s]==nums[e] && (s*e)%k==0) cnt++;
            if(e==s+1){
                s++;
                e=nums.size()-1;
            }else{
                e--;
            }     
        }
        return cnt;
    }
};