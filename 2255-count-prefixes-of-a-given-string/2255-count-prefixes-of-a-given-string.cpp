class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(auto &w:words){
            int n=w.size();
            if(s.substr(0,n)==w) cnt++;
        }
        return cnt;
    }
};