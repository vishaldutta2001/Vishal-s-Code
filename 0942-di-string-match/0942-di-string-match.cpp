class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size(), min=0, max=n;
        vector<int> ans(n+1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                ans[i]=min++;
            }else{
                ans[i]=max--;
            }
        }
        ans[n]=min;
        return ans;
    }
};