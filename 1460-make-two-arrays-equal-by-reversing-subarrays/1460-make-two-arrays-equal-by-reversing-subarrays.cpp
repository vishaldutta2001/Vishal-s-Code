class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size()!=arr.size()) return false;
        int fre[1001]={0};
        for(int i=0;i<target.size();i++){
            fre[target[i]]++;
            fre[arr[i]]--;
        }
        for(auto a:fre){
            if(a!=0) return false;
        }
        return true;
    }
};