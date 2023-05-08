class Solution {
    int bitCount(int el){
        int count=0;
        while(el){
            if(el&1) count++;
            el=el>>1;
        }
        return count;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            arr[i]=arr[i]+(bitCount(arr[i])*10001);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            arr[i]=arr[i]%10001;
        }
        return arr;
    }
};