class Solution {
public:
    int maxVowels(string str, int k) {
        set<int> s={'a', 'e', 'i', 'o', 'u'};
        int count=0; 
        for(int i=0,counting=0;i<str.size();i++){
            counting=counting + s.count(str[i]);
            if(i-k>=0) counting=counting - s.count(str[i-k]);
            count=max(count,counting);
            if(count==k){
                break;
            }
        }
        return count;
    }
};