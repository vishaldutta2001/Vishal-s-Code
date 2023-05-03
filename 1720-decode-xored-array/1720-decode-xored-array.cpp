class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        //res=encoded[0] exor first gives arr[1]
        vector<int> arr;
        arr.push_back(first);
        for(int i=0;i<encoded.size();i++){
            int res=arr[i]^encoded[i];
            arr.push_back(res);
        }
        return arr;
    }
};