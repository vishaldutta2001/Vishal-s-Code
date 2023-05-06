class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> s;
        int res;
        for(int n:nums){
            if(s.count(n)){
                res=n;
            }       
            s.insert(n);
        }
        return res;
    }
};