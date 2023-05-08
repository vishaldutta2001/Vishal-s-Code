class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> res;
        set<int> s;
        for(auto el:nums1){
            if(find(nums2.begin(),nums2.end(),el)!=nums2.end() ||           
               find(nums3.begin(),nums3.end(),el) !=nums3.end()){
                s.insert(el);
            }
        }
        for(auto el:nums2){
            if(find(nums1.begin(),nums1.end(),el)!=nums1.end() || 
               find(nums3.begin(),nums3.end(),el)!=nums3.end()){
                s.insert(el);
            }
        }
        for(auto el:s){
            res.push_back(el);
        }
        return res;
    }
};