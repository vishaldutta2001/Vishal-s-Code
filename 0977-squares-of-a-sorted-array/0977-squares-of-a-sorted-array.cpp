class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        int s=0, e=n-1;
        int i=n-1;
        while(s<=e && i>=0){
            if(abs(nums[s]) < abs(nums[e])){
                res[i--]=nums[e]*nums[e];
                e--;
            }
            else{
                res[i--]=nums[s]*nums[s];
                s++;
            }
        }
        return res;
        
    }
};