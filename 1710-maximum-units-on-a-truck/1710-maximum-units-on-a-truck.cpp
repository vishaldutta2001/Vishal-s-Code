class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        //maintain the maxUnit and minUNit and stored their corresponding box size in the array
        int minUnit=INT_MAX, maxUnit=INT_MIN, res=0;
        int arr[1001]={0};
        for(auto el:boxTypes){
            minUnit=min(minUnit,el[1]);
            maxUnit=max(maxUnit,el[1]);
            arr[el[1]]+=el[0];
        }
        for(int i=maxUnit,size ;i>=minUnit;i--){
            size=arr[i];
            if(!size) continue;
            int currBatch=min(size,truckSize);
            res+=currBatch*i;
            truckSize-=currBatch;
            if(!truckSize) break;
        }
        return res;
    }
};