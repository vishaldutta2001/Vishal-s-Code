class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool a[26]={0};
        int cnt=0;
        for(int i=0;i<allowed.size();i++){
            a[allowed[i]-'a']=true;
        }
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(!a[words[i][j]-'a']){
                    break;
                }else{
                    if(j==words[i].size()-1){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};