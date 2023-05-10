class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi=0;
        for(string s:strs){
            int res=0;
            for(char ch:s){
                if(ch<'0' || ch>'9') {
                    res=s.size();
                    break;
                }
                res=res*10+(ch-'0');
            }
            maxi=max(maxi,res);
        }
        return maxi;
    }
};