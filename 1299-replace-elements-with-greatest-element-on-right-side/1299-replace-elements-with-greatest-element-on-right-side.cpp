class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=1;
        int n=arr.size();
        vector<int> ans(n);
        for(int i=n-2;i>=0;i--){
            if(max<arr[i+1]){
                max=arr[i+1];
            }
            ans[i]=max;
        }
        ans[n-1]=-1;
        return ans;
    }
};