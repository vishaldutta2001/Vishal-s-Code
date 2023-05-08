class Solution {
    // private:
    // bool sortCol(vector<int>& v1, vector<int>& v2){
    //     return v1[1]>v2[1];
    // }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int max=0;
        sort(boxTypes.begin(),boxTypes.end(),[](auto &v1,auto &v2){return v1[1]>v2[1];});
        // 5,10  3,9   4,7   2,5

        for(auto &el:boxTypes){ 
            int currBatch=min(el[0],truckSize);
            truckSize-=currBatch;
            max+= currBatch*el[1];
            if(!truckSize) break;
        }
        return max;
    }
};