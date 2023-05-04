class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int i=0;
        while(i<heights.size()){
            int max=1;
            int maxIndex=i;
            for(int j=i;j<heights.size();j++){
                if(max<heights[j]){
                    max=heights[j];
                    maxIndex=j;
                }
            }
            swap(names[i],names[maxIndex]);
            swap(heights[i],heights[maxIndex]);
            i++;
        }
        return names;
    }
};