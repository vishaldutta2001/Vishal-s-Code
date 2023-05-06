class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pCnt=0, nCnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) nCnt++;
            else if(nums[i]>0) pCnt++;
        }
        return pCnt>nCnt ? pCnt : nCnt;
    }
};