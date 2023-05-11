class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int fre[10001]={0}; //storing next greatest value 
        stack<int> st;
        vector<int> ans;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                fre[nums2[i]]=-1;
            }
            else{
                fre[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(fre[nums1[i]]);
        }
        return ans;
    }
};