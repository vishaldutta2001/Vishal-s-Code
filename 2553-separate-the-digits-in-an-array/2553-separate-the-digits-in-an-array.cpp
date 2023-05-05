class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            string val=to_string(nums[i]);
            for(auto d:val){
                ans.push_back(d-'0');
            }
        }
        return ans;
    }
};