class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        //sort min at i=0 and max at j=n-1
        //we will take min (i==0) max (j==n-1)
        //we will compare (i+j <=target) 
        //if not change the index max j by 1 (j-1)
        //3 5 6  3==2**0 (3)  35==2**1 (3, 3-5)   356==2**2 (3,35,36,356)
        int n=nums.size(),mod=1000000007;
        vector<int> p2(n,1);
        int i=0,j=n-1, res=0;
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            p2[i]=(p2[i-1]*2)%mod;
        }// 1 2 4 8
        while(i<=j){
            if(nums[i]+nums[j]<=target){
                res= (res+p2[j-i])%mod;
                i++;
            }
            else{
                j--;
            }
        }
        return res;
    }
};