class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            string w=words[i];
            int s=0,e=w.size()-1;
            if((w[s]=='a' || w[s]=='e' || w[s]=='i' || w[s]=='o' || w[s]=='u') 
               && (w[e]=='a' || w[e]=='e' || w[e]=='i' || w[e]=='o' || w[e]=='u')){
                cnt++;
            }
        }
        return cnt;
    }
};