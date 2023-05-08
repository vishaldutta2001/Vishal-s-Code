class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> res;
        vector<int> v(1001,0);
        int minIndex=INT_MAX, maxIndex=INT_MIN;
        for(auto el:nums1){
            minIndex=min(minIndex,el[0]);
            maxIndex=max(maxIndex,el[0]);
            v[el[0]]+=el[1];
        }
        for(auto el:nums2){
            minIndex=min(minIndex,el[0]);
            maxIndex=max(maxIndex,el[0]);
            v[el[0]]+=el[1];
        }
        for(int i=minIndex;i<=maxIndex;i++){
            if(v[i]!=0){
                res.push_back({i,v[i]});
            }            
        }
        return res;   
    }
};