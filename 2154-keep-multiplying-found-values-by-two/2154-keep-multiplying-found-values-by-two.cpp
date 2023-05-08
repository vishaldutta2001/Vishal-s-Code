class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s(nums.begin(), nums.end());
        while(true){
            if(s.count(original) == 0){
                return original;
            }
            else{
                original=2*original;
            }
        }
    }
};