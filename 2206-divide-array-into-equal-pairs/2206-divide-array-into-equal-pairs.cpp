class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> fre(501,0);
        for(int i=0;i<nums.size();i++){
            fre[nums[i]]++;
        }
        for(int i=0;i<fre.size();i++){
            if(fre[i]%2!=0) return false;
        }
        return true;
    }
};