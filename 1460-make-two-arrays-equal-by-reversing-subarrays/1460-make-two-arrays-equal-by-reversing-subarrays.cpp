class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        for(int i=0;i<target.size();i++){
            for(int j=i;j<arr.size();j++){
                if(target[i]==arr[j]){
                    swap(arr[j],arr[i]);
                    break;
                }
            }
        }   
        for(int i=0;i<arr.size();i++){
            if(target[i]!=arr[i]) {
                return false;
            }
        }
        return true;
    }
};