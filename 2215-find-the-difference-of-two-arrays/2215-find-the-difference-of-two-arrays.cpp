class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans={{},{}};
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
            
        for(auto a:s1){
            if(s2.count(a)==0) ans[0].push_back(a);
        }
        for(auto a:s2){
            if(s1.count(a)==0) ans[1].push_back(a);
        }
        return ans;
    }
};