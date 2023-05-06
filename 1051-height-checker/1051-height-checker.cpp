class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans=heights;
        int cnt=0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<heights.size();i++){
            if(ans[i]!=heights[i]) cnt++;
        }
        return cnt;
    }
};