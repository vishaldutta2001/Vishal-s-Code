class Solution {
public:
    int arraySign(vector<int>& nums) {
        int res=0, neg;
        for(auto val:nums){
            if(val==0){
                return 0;
            }
            else if(val<0){
                neg++;
            }
        }
        if(neg%2==0){
            return 1;
        }
        return -1;
    }
};