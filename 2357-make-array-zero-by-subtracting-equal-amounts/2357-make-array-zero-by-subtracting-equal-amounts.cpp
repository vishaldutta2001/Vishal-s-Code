class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int op=s.size();
        if(s.count(0)){
            op--;
        }
        return op;
    }
};