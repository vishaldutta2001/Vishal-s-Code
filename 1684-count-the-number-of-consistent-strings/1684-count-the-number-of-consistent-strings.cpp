class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int res=words.size();
        bool a[26]={0};
        for(char ch:allowed){
            a[ch-'a']=true;
        }
        for(string word:words){
            for(char ch:word){
                if(!a[ch-'a']){
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};