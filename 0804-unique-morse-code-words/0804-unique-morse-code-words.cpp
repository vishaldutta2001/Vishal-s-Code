class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> checked={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string,int> res;
        for(int i=0;i<words.size();i++){
            string st;
            for(int j=0;j<words[i].size();j++){
                st+=checked[words[i][j]-'a'];
            }
            res[st]=1;
        }
        return res.size();
    }
};