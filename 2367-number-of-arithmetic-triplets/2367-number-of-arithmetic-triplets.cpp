class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt=0;
        for(int i=0;i<nums.size()-2;i++){
            bool firstCase=true;
            bool secondCase=true;
            int j=i+1;
            for(;j<nums.size()-1;j++){
                if(nums[j]-nums[i]==diff){
                     break;
                }
                else if(j==nums.size()-2){
                    firstCase=false;
                }
            }
            if(firstCase){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[k]-nums[j]==diff){
                        break;
                    }
                    else if(k==nums.size()-1){
                        secondCase=false;
                    }
                }
            }
            if(firstCase && secondCase){
                cnt++;
            }
        }
        return cnt;
    }
};