class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string val="";
        for(string s:words){
            int i=0, j=s.size()-1;
            while(i<j){
                if(s[i]!=s[j]){
                    break;
                }
                i++,j--;
            }
            if(i>=j){
                val = s;
                break;
            }
        }
        return val;
    }
};