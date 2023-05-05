class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        int val1=-1,val2=1;
        if(n%2!=0) res.push_back(0);
        for(int i=n%2!=0 ? 1 : 0;i<n;i++){
            if(i%2!=0){
                res.push_back(val1--);
            }
            else{
                res.push_back(val2++);
            }
        }
        return res;
    }
};