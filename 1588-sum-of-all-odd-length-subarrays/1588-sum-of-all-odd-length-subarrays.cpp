class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        //we are finding contribution than element*contribution 
        //contribution in how many subarray that element existed
        //contribution = (i+1)*(n-i)
        //i=2  142 1425  14253  42 425 4253 2 253 25
        //contribution = 9 
        //we consider only odd left subarray contibution ceil(((i+1)*(n-1))/2.0)
        // contibution* arr[i]  gives that arr[i] total contribution in odd length subarray
        int ans=0, contribution=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            contribution=((i+1)*(n-i)+1)/2;
            ans+=contribution * arr[i];
        }
        return ans;
    }
};