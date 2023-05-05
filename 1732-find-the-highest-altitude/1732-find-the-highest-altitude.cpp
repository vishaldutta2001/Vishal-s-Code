class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0,  curr=0;
        for(int i=0;i<gain.size();i++){
            curr+=gain[i];
            res= res<curr ? curr : res;
        }
        return res;
    }
};