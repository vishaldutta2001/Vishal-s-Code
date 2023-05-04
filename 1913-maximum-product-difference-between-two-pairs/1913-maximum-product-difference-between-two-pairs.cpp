class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1=INT_MIN, max2=INT_MIN, min1=INT_MAX, min2=INT_MAX;
        for(int ele:nums){
            if(ele>max1){
                max2=max1;
                max1=ele;
            }else if(ele>max2){
                max2=ele;
            }
            if(min1>ele){
                min2=min1;
                min1=ele;
            }else if(min2>ele){
                min2=ele;
            }
        }
        return (max1*max2) - (min1*min2);
    }
};