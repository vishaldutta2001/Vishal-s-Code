class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        vector<bool> check(1001,false);
        for(auto n:nums) check[n]=true;
        while(original<1001 && check[original]) original=2*original;
        return original;
    }
};