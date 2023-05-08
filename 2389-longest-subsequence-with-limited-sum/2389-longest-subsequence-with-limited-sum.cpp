class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        int n=nums.size(), m=queries.size();
        // int case=0;
        vector<int> res;
        for(int i=0;i<m;i++){
            int s=0, count=0;
            for(int j=0;j<n;j++){
                s+=nums[j],count++;
                if(s==queries[i]){
                   res.push_back(count);
                    break;    
                }else if(s<queries[i]){
                    if(j==n-1){
                        res.push_back(count);
                    }
                    else if(s+nums[j+1]>queries[i]) {
                        res.push_back(count);
                    }
                     
                }else if(s>queries[i] && s==nums[0]){
                    res.push_back(--count);
                }
                
            }
        }
        return res;
    }
};