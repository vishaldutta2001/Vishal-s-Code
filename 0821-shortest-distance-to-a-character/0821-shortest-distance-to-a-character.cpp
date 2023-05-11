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
        int left=0,right=0;
        for(int i=0;i<s.size();i++){
            if(i>ind[right]){
                left=right;
                if(ind.size()-1>right){
                    right++;   
                }
                
            }
            res.push_back(min(abs(ind[left]-i),abs(ind[right]-i)));
        }
        return res;
    }
};