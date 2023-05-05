class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            vector<int> data;
            while(val){ //13  3  1
                int rem=val%10;
                val/=10;
                data.push_back(rem);
            }
            int ele=data.size()-1;
            while(!data.empty()){
                ans.push_back(data[ele--]); //1 3
                data.pop_back();
            }
        }
        return ans;
    }
};