class Solution {
public:
    int singleNumber(vector<int>& nums) {
       map<int,int> m;
        int res;
        for(int n:nums){
            m[n]++;
        }
        for(auto it:m){
            if(it.second==1){
                res=it.first;
                break;
            }
        }
        return res;
    }
};