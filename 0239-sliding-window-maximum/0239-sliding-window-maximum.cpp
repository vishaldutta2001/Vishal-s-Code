class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> d;//decreasing deque front() have maximum value correspond to index
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(!d.empty() && d.front()==i-k) d.pop_front();
            
            while(!d.empty() && nums[i]>nums[d.back()]){
                d.pop_back();   
            } 
            d.push_back(i);
            
            if(i>=k-1){
                ans.push_back(nums[d.front()]);
            }
            
        }
        return ans;
    }
};