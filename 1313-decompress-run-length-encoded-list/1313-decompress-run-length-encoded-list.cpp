class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<(n/2);i++){
            int freq=nums[2*i];
            int val=nums[2*i + 1];
            while(freq){
                res.push_back(val);
                freq--;
            }
        }
        return res;
    }
};