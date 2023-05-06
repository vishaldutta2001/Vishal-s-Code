class Solution {
public:
    int arraySign(vector<int>& nums) {
        int val=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) {
                val=0;
                break;
            }
            else if(nums[i]<0){
                cnt++;
            }
        }
        return val==0 ? (val) : (cnt%2==0 ? 1 : -1) ;
    }
};