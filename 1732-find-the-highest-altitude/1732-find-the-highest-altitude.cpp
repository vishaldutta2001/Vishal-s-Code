class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> rec(n+1,0);
        int max=0;
        for(int i=0;i<gain.size();i++){
            rec[i+1]=gain[i]+rec[i];
            if(max<rec[i+1]){
                max=rec[i+1];
            }
        }
        return max;
    }
};