class Solution {
public:
    vector<int> ans;
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;
        binarySearch(nums,s,e,target);
        return ans;
    }
    void binarySearch(vector<int> nums, int s, int e, int target){
        if(s>e){
            return ;
        }
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            binarySearch(nums,s,mid-1,target);
            ans.push_back(mid);
            binarySearch(nums,mid+1,e,target);
        }
        else if(nums[mid]>target){
            binarySearch(nums,s,mid-1,target);
        }
        else{
            binarySearch(nums,mid+1,e,target);
        }
    }
};