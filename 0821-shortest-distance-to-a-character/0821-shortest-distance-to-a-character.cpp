class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> res;
        vector<int> ind;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                ind.push_back(i);
            }
        }
        for(int i=0;i<s.size();i++){
            int min=INT_MAX;
            for(int j=0;j<ind.size();j++){
                if(abs(i-ind[j])<min){
                    min=abs(i-ind[j]);
                }
            }
            res.push_back(min);
        }
        return res;
    }
};