class Solution {
    bool binarySearch(vector<int> arr, int s, int e, int original){
        if(s>e) return false;
        int mid=s+(e-s)/2;
        if(arr[mid]==original){
            return true;
        }else if(arr[mid]<original){
            return binarySearch(arr,mid+1,e,original);
        }else{
            return binarySearch(arr,s,mid-1,original);
        }
    }
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        while(true){
            if(binarySearch(nums,0,nums.size()-1,original)){
                original=original*2;
            }else{
                return original;
            }
        }
    }
};