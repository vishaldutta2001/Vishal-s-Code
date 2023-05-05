class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(string str:words){
         int n=min(pref.size(), words.size());
         for(int i=0;i<n;i++){
             if(str[i]!=pref[i]){
                 break;
             }
             if(i==n-1) cnt++;
         }
        }
        return cnt;
    }
};